/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:17:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/01/29 11:19:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include "../libft/libft.h"
#include "../printf/ft_printf.h"

#define BUFFER_SIZE 40

typedef struct s_file
{
    int in_fd;
    int out_fd;
} t_file;

char *find_right_path(char **cmds, char **env);
char *find_path(char **env);
void clear_tab(char **tab);
void execute(char *cmd, char **env);
void print_error(int choice, int error, const char *str);
void open_files(t_file *files, int argc, char **argv, int choice);

// Bonus
void do_pipe(char *cmd, char **env);
void here_doc(char **argv);
char *get_next_line(int fd);

#endif