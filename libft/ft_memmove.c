/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:37:08 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:37:08 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*tab_src;
	char		*tab_dest;

	tab_src = src;
	tab_dest = dest;
	if (dest == src || n == 0)
		return (dest);
	if (tab_dest < tab_src || tab_dest >= (tab_src + n))
		ft_memcpy(dest, src, n);
	else
	{
		tab_dest += n - 1;
		tab_src += n - 1;
		while (n > 0)
		{
			*tab_dest-- = *tab_src--;
			n--;
		}
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char str[] = "Hello, World!";
	ft_memmove(&str[4], &str[7], 5);
	printf("%s\n", str);
	char strcpy[] = "Hello, World!";
	memmove(&strcpy[4], &strcpy[7], 5);
	printf("%s\n", str);
	return 0;
}*/