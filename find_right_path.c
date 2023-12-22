/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_right_path.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:52:57 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/12 10:45:02 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*find_path(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
			return (env[i] + 5);
		i++;
	}
	return (NULL);
}

char	*find_right_path(char **cmds, char **env)
{
	char	*way;
	char	*temp;
	int		i;
	char	**path;

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
