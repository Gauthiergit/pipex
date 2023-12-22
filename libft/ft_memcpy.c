/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:36:16 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:36:16 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*tab_src;
	unsigned char		*tab_dest;
	unsigned int		i;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	i = 0;
	tab_src = src;
	tab_dest = dest;
	while (i < n)
	{
		tab_dest[i] = tab_src[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	int src[5] = {1, 2, 3, 4, 5}; // Tableau d'entiers
	int dest[5];
	size_t num_elements = sizeof(src) / sizeof(src[0]);
	
	// Utilisation de memcpy() pour copier les bytes dans dest
	ft_memcpy(dest, src, num_elements * sizeof(int));

	long unsigned int i = 0;
	while (i < num_elements)
	{
		printf("%d ", dest[i]);
		i++;
	}
	printf("\n");

	return 0;
}*/