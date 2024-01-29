/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:08:08 by gpeyre            #+#    #+#             */
/*   Updated: 2024/01/29 11:06:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **env)
{
	int pipe_fd[2];
	pid_t child_pid;
	t_file files;

	if (argc < 5)
		print_error(1, errno, "Use: ./pipex file1 cmd1 ..cmdn file2");
	open_files(&files, argc, argv, 0);
	if (pipe(pipe_fd) == -1)
		print_error(0, errno, "pipe");
	child_pid = fork();
	if (child_pid == -1)
		print_error(0, errno, "fork");
	if (child_pid == 0)
	{
		close(pipe_fd[0]);
		dup2(pipe_fd[1], 1);
		execute(argv[2], env);
	}
	else
	{
		close(pipe_fd[1]);
		dup2(pipe_fd[0], 0);
		execute(argv[argc - 2], env);
	}
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