/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:49 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:06:49 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	long unsigned int	i;
	size_t				len_src;

	len_src = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (n == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[20];
	char	src[] = "Yo mon poulet";
	size_t result = ft_strlcpy(dest, src, 20);

	printf("%s\n", dest);
	printf("Lenght total: %ld\n", result);
	return (0);
}*/