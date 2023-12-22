/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parent_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:52:45 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 11:15:25 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	parent_process(int *pipe_fd, char **argv, char **env)
{
	int	out_fd;

	out_fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (out_fd == -1)
	{
		perror("open2");
		exit(0);
	}
	dup2(out_fd, STDOUT_FILENO);
	close(pipe_fd[1]);
	dup2(pipe_fd[0], 0);
	close(pipe_fd[0]);
	execute(argv[3], env);
}
