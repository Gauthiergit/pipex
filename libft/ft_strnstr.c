/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:11:14 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:11:14 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	long unsigned int	i;
	long unsigned int	j;

	i = 0;
	if (!str && n == 0)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < n)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "J'aime les chiens et les chats";
	char	to_find[] = "chats";
	char *result = ft_strnstr(str, to_find, 30);

	if (!result)
		printf("Pas trouve\n");
	else
		printf("%s\n", result);
	return (0);
}*/