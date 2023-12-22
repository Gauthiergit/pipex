/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:35:29 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:35:29 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tab_s1;
	unsigned char	*tab_s2;

	tab_s1 = (unsigned char *)s1;
	tab_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tab_s1[i] != tab_s2[i])
			return (tab_s1[i] - tab_s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	const char s1[] = "hello";
	const char s2[] = "hello";
	const char s3[] = "world";
	char s4[] = {0, 0, 127, 0};
	char s5[] = {0, 0, 42, 0};

	printf("%d\n", ft_memcmp(s1, s2, 0));
	printf("%d\n", ft_memcmp(s1, s3, 4));
	printf("%d\n", ft_memcmp(s3, s2, 4));
	printf("%d\n", ft_memcmp(s4, s5, 4));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 0));
	printf("%d\n", memcmp(s1, s3, 4));
	printf("%d\n", memcmp(s3, s2, 4));
	printf("%d\n", memcmp(s4, s5, 4));
}*/