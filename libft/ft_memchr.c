/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:20:33 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:20:33 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	long unsigned int	i;
	const unsigned char	*tab;

	tab = s;
	i = 0;
	while (i < n)
	{
		if (tab[i] == (unsigned char)c)
			return ((void *)&tab[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main() 
{
	char str[] = "Bonjour, monde!";
	size_t len = 0;
	while (str[len])
		len++;
	char* ptr = ft_memchr(str, 'm', len);

	if (ptr != NULL)
	{
		printf("L'octet 'm' a ete trouve a la position %ld\n", ptr - str);
		printf("ptr: %s\n", ptr);
	}
	else
		printf("L'octet 'm' n'a pas ete trouve dans la chaine.\n");
	return 0;
}*/