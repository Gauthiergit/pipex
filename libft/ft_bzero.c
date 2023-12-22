/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:03:09 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:03:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = s;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>
#include <strings.h>
int main(void)
{
	int arr[5]; // Tableau d'entiers
	size_t num_elements = sizeof(arr) / sizeof(arr[0]);

	// Utilisation de ft_bzero() pour remplir le tableau avec la valeur "\0"
	ft_bzero(arr, num_elements * sizeof(int));

	long unsigned int i = 0;
	while (i < num_elements)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	// Utilisation de bzero() pour remplir le tableau avec la valeur "\0"
	bzero(arr, num_elements * sizeof(int));

	i = 0;
	while (i < num_elements)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}*/