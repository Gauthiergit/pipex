/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:32 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:06:32 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				len_dest;
	size_t				len_src;
	size_t				space_disp;

	if ((!src || !dest) && size == 0)
		return (0);
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	if ((size - len_dest - 1) < len_src)
		space_disp = size - len_dest - 1;
	else
		space_disp = len_src;
	ft_memcpy(dest + len_dest, src, space_disp);
	dest[len_dest + space_disp] = '\0';
	return (len_dest + len_src);
}
/*#include <stdio.h>
int	main(void)
{
	size_t result;
	char dest[40] = "Tu me vois, ";
	char src[] = "tu me vois plus.";

	result = ft_strlcat(dest, src, 40);
	printf("%s\n", dest);
	printf("%d\n", result);
	return (0);
}*/