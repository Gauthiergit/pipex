/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:53:13 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:53:13 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void simple_qt(char const *str, int *i, char c)
{
	while (str[*i] && str[*i] != c)
	{
		if (str[*i] == 39)
		{
			(*i)++;
			while (str[*i] != 39 && str[*i])
				(*i)++;
		}
		(*i)++;
	}
}

static int len_tab(char const *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == 39)
		{
			i++;
			while (str[i] != 39 && str[i])
				i++;
			i++;
			len++;
		}
		else if (str[i] != c && str[i] != 39)
		{
			simple_qt(str, &i, c);
			len++;
		}
		while (str[i] && str[i] == c)
			i++;
	}
	return (len + 1);
}

static int len_word(int *index, char const *str, char c)
{
	int len;

	len = 0;
	while ((str[*index] == c) || (str[*index] == 39))
		(*index)++;
	if (str[*index - 1] == 39 && str[*index - 2] == c)
	{
		while (str[*index + len] != 39 && str[*index + len])
			len++;
	}
	else
	{
		while (str[*index + len] != c && str[*index + len])
		{
			len++;
			if (str[*index + len] == 39)
			{
				len++;
				while (str[*index + len] != 39 && str[*index + len])
					len++;
			}
		}
	}
	return (len);
}

static char *get_next_word(int *index, char const *str, char c)
{
	char *res;
	int len;
	int i;

	i = 0;
	len = len_word(index, str, c);
	if (len == 0)
		return (NULL);
	res = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		res[i] = str[*index];
		i++;
		(*index)++;
	}
	res[i] = 0;
	return (res);
}

char **ft_split(char const *s, char c)
{
	char **res;
	int len;
	int i;
	int j;

	if (!s)
		return (NULL);
	len = len_tab(s, c);
	i = 0;
	j = 0;
	if (len == 0)
		return (NULL);
	res = malloc(len * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < len - 1)
	{
		res[i] = get_next_word(&j, s, c);
		i++;
	}
	res[i] = 0;
	return (res);
}
/* #include <stdio.h>
int main(void)
{
	char const str[] = "cut -d' ' -f2";
	char c = ' ';
	int len = len_tab(str, c);
	int i = 0;
	char **res;

	res = ft_split(str, c);

	while (i < len - 1)
	{
		printf("%s\n", res[i]);
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		free(res[i]);
		i++;
	}
	free(res);
} */