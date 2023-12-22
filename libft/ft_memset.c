/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:51:37 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:51:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = s;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int main(void)
{
	int arr[5]; // Tableau d'entiers
	int value = 42; // Valeur � copier dans le tableau
	size_t num_elements = sizeof(arr) / sizeof(arr[0]);

	// Utilisation de memset() pour remplir le tableau avec la valeur "value"
	ft_memset(arr, value, num_elements * sizeof(int));

	// Affichage du tableau rempli
	printf("Tableau rempli avec la valeur %d :\n", value);

	long unsigned int i = 0;
	while (i < num_elements)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return 0;
}*/