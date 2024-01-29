/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:03:56 by marvin            #+#    #+#             */
/*   Updated: 2024/01/26 17:03:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

static char *clean_line(char **str)
{
    char *line;
    char *temp;
    int len;

    len = 0;
    temp = *str;
    while (temp[len] && temp[len] != '\n')
        len++;
    if (temp[len] == '\n')
    {
        line = ft_substr(temp, 0, len + 1);
        *str = ft_substr(temp, (len + 1), ft_strlen(temp) - (len + 1));
        free(temp);
        if (!**str)
        {
            free(*str);
            *str = NULL;
        }
        return (line);
    }
    line = ft_substr(*str, 0, len);
    free(*str);
    *str = NULL;
    return (line);
}

static int read_fd(int fd, char **stash)
{
    char *buff;
    int nb_read;
    char *temp;

    buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buff)
        return (-1);
    nb_read = read(fd, buff, BUFFER_SIZE);
    while (nb_read > 0)
    {
        buff[nb_read] = '\0';
        if (!(*stash))
            *stash = ft_strdup("");
        temp = *stash;
        *stash = ft_strjoin(temp, buff);
        free(temp);
        if (ft_strchr(*stash, '\n'))
            break;
        nb_read = read(fd, buff, BUFFER_SIZE);
    }
    free(buff);
    return (nb_read);
}

char *get_next_line(int fd)
{
    static char *stash;
    char *line;
    int nb_read;

    if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
        return (free(stash), stash = NULL, NULL);
    nb_read = read_fd(fd, &stash);
    if (nb_read == -1)
        return (NULL);
    if (!nb_read && !stash)
        return (NULL);
    line = clean_line(&stash);
    return (line);
}
