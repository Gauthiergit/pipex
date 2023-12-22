/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:03:24 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/11 11:24:33 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (((size_t)-1) / nmemb < size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
/*#include <stdio.h>
int main()
{
    int *tab;
	size_t nbelem = (size_t) - 1;
    size_t i = 0;
	size_t size = (size_t) - 1;

    tab = ft_calloc(nbelem, size);
	if (tab)
	{
    	while (i < nbelem)
    	{
        	printf("%d ", tab[i]);
        	i++;
    	}
	}
	else
		printf("NULL\n");
	printf("\n");
    free(tab);
	i = 0;
	tab = calloc(nbelem, size);
	if (tab)
	{
    	while (i < nbelem)
    	{
        	printf("%d ", tab[i]);
        	i++;
    	}
	}
	else
		printf("NULL\n");
    free(tab);
	return (0);
}*/