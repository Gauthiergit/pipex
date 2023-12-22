/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:29:53 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 09:29:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*del_start_whitespace(char *str, const char *set)
{
	int	i;

	i = 0;
	while (is_in_set(str[i], set))
		i++;
	return (&str[i]);
}

static size_t	len_whithout_end_whitespace(char *str, const char *set)
{
	size_t	len;

	len = ft_strlen(str);
	if (len == 0)
		return (len);
	while (is_in_set(str[len - 1], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char				*str;
	char				*tab;
	long unsigned int	i;
	size_t				len;

	if (!set || !s)
		return (NULL);
	str = (char *)s;
	str = del_start_whitespace(str, set);
	len = len_whithout_end_whitespace(str, set);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*#include <stdio.h>
int main()
{
	char const s[] = "    Je   suis   ";
	char const set[] = "  ";
	char	*tab = ft_strtrim(s, set);
	
	printf("%s\n", tab);
	free(tab);
	return (0);
}*/