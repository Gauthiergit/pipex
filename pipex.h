/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:17:01 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 11:17:03 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

char	*find_right_path(char **cmds, char **env);
char	*find_path(char **env);
void	clear_tab(char **tab);
void	child_process(int *pipe_fd, char **argv, char **env);
void	parent_process(int *pipe_fd, char **argv, char **env);
void	execute(char *cmd, char **env);

#endif