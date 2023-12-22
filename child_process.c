/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:35:29 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 11:16:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process(int *pipe_fd, char **argv, char **env)
{
	int	in_fd;

	in_fd = open(argv[1], O_RDONLY, 0777);
	if (in_fd == -1)
	{
		perror("open1");
		exit(0);
	}
	dup2(in_fd, 0);
	close(pipe_fd[0]);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[1]);
	execute(argv[2], env);
}
