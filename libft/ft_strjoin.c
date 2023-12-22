/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:01 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:06:01 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tab;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	tab = ft_calloc(len + 1, sizeof(char));
	if (!tab)
		return (NULL);
	if (s1)
		ft_strcat(tab, s1);
	if (s2)
		ft_strcat(tab, s2);
	return (tab);
}
/*#include <stdio.h>
int main()
{
	char const s1[] = "Je suis ";
	char const s2[] = "vengeance";
	char* str = ft_strjoin(s1, s2);

	printf("Attendu: Je suis vengeance / Sorti: %s\n", str);
	free(str);
	return (0);
}*/