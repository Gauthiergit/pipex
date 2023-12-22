/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:08:08 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 11:12:27 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **env)
{
	int		pipe_fd[2];
	pid_t	child_pid;

	if (argc != 5)
	{
		ft_printf("Usage: ./pipex infile command1 command2 outfile\n");
		exit(-1);
	}
	if (pipe(pipe_fd) == -1)
	{
		perror("pipe");
		exit(-1);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(-1);
	}
	if (child_pid == 0)
		child_process(pipe_fd, argv, env);
	else
		parent_process(pipe_fd, argv, env);
	return (0);
}

/* int	main(int argc, char **argv, char **env)
{
	char	**path;
	int		i;

	(void)argc;
	(void)argv;
	path = ft_split(find_path(env), ':');
	i = 0;
	while (path[i])
	{
		ft_printf("%s\n", path[i]);
		i++;
	}
	i = 0;
	while (path[i])
	{
		free(path[i]);
		i++;
	}
	free(path);
} */

/* int	main(int argc, char **argv, char **env)
{
	int		i;

	(void)argc;
	(void)argv;
	i = 0;
	while (env[i])
	{
		ft_printf("%s\n", env[i]);
		i++;
	}
	return (0);
} */