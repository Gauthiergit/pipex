/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:04:34 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:04:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_tab(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*fill_in_tab(char *tab, int n, size_t len)
{
	long unsigned int	start;

	start = 0;
	if (n < 0)
	{
		tab[0] = '-';
		n = -n;
		start = 1;
	}
	tab[len] = '\0';
	while (len > start)
	{
		tab[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*tab;
	char	*int_max;

	int_max = "-2147483648";
	if (n == -2147483648)
		len = ft_strlen(int_max);
	else
		len = len_tab(n);
	if (len == 0)
		return (NULL);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	if (n == -2147483648)
	{
		tab = ft_memcpy(tab, int_max, len);
		tab[len] = '\0';
	}
	else
		tab = fill_in_tab(tab, n, len);
	return (tab);
}
/*#include <stdio.h>
int main()
{
	int n = -2147483648;
	char* nbr = ft_itoa(n);

	printf("-2147483648 | %s\n", nbr);
	free(nbr);
	n = -2147483647;
	nbr = ft_itoa(n);
	printf("-2147483647 | %s\n", nbr);
	free(nbr);
	n = 2147483646;
	nbr = ft_itoa(n);
	printf("2147483646 | %s\n", nbr);
	free(nbr);
	n = 0;
	nbr = ft_itoa(n);
	printf("0 | %s\n", nbr);
	free(nbr);
	return (0);
}*/