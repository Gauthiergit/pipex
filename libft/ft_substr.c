/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:26:48 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 09:26:48 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (start + len > ft_strlen(s))
		size = ft_strlen(s) - start;
	else
		size = len;
	tab = (char *)malloc((size + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}
/*#include <stdio.h>
int main()
{
	char const s[] = "0123456789";
	unsigned int start = 9;
	size_t len = 10;
	char* str = ft_substr(s, start, len);

	printf("%s\n", str);
	free(str);
	return (0);
}*/