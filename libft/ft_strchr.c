/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:01:37 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:01:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	const char s[] = "Je suis vengeance";
	char* find = ft_strchr(s, '\0');

	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strchr(s, '\0');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	printf("\n");
	find = ft_strchr(s, 'v' + 256);
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strchr(s, 'v' + 256);
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	printf("\n");
	find = ft_strchr(s, 'v');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strchr(s, 'v');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");

	return (0);
}*/