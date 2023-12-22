/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:25:26 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 09:25:26 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*#include <stdio.h>
char ft_upperi(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		printf("Le caratere a l'index %u a ete modifie\n", i);
	}
	return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*tab;
	long unsigned int	i;
	size_t				len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*int main()
{
	char const s[] = "hello";
	char* str = ft_strmapi(s, ft_upperi);

	printf("Avant ft_strmap: %s\n", s);
	printf("Apres ft_strmap: %s\n", str);

	free(str);
}*/