/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:43:18 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 11:08:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void clear_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
}

void execute(char *cmd, char **env)
{
	char **cmd_splited;
	char *way;

	cmd_splited = ft_split(cmd, ' ');
	way = find_right_path(cmd_splited, env);
	if (execve(way, cmd_splited, env) == -1)
	{
		perror("execve");
		exit(1);
	}
}

char *find_path(char **env)
{
	int i;

	i = 0;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
			return (env[i] + 5);
		i++;
	}
	return (NULL);
}

char *find_right_path(char **cmds, char **env)
{
	char *way;
	char *temp;
	int i;
	char **path;

	i = 0;
	way = NULL;
	path = ft_split(find_path(env), ':');
	while (path[i])
	{
		temp = ft_strjoin(path[i], "/");
		way = ft_strjoin(temp, cmds[0]);
		free(temp);
		if (access(way, F_OK | X_OK) != -1)
		{
			clear_tab(path);
			return (way);
		}
		free(way);
		way = NULL;
		i++;
	}
	clear_tab(path);
	return (NULL);
}

void open_files(t_file *files, int argc, char **argv, int choice)
{
	if (choice == 0)
	{
		files->out_fd = open(argv[argc - 1], O_WRONLY | O_CREAT | O_TRUNC, 0777);
		files->in_fd = open(argv[1], O_RDONLY, 0777);
		if (files->in_fd == -1)
			print_error(0, errno, "open infile");
		dup2(files->in_fd, 0);
		close(files->in_fd);
	}
	else if (choice == 1)
		files->out_fd = open(argv[argc - 1], O_WRONLY | O_CREAT | O_APPEND, 0777);
	if (files->out_fd == -1)
		print_error(0, errno, "open outfile");
	dup2(files->out_fd, STDOUT_FILENO);
	close(files->out_fd);
}
