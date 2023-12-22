/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:09:50 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:09:50 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>
int main(void)
{
	char s1[] = "hello";
	char s2[] = "hello";
	char s3[] = "heworld";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s3, 3));
	printf("%d\n", ft_strncmp(s3, s2, 3));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s3, 3));
	printf("%d\n", strncmp(s3, s2, 3));
}*/