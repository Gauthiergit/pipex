/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:48:29 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 11:15:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	execute(char *cmd, char **env)
{
	char	**cmd_splited;
	char	*way;

	cmd_splited = ft_split(cmd, ' ');
	way = find_right_path(cmd_splited, env);
	if (execve(way, cmd_splited, env) == -1)
	{
		perror("execve");
		exit(0);
	}
	free(way);
	clear_tab(cmd_splited);
}
