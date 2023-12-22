/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:15:52 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:15:52 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else if (s[j] == (char)c)
		return ((char *)&s[j]);
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	const char s[] = "Je suis vengeance";
	char* find = ft_strrchr(s, 'n');

	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strrchr(s, 'n');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	printf("\n");
	find = ft_strrchr(s, '\0');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strrchr(s, '\0');
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	printf("\n");
	find = ft_strrchr(s, 'g' + 256);
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	find = strrchr(s, 'g' + 256);
	if (find != NULL)
		printf("L'octet a ete trouvee a la position %ld\n", find - s);
	else
		printf("L'octet n'a pas ete trouve dans la chaine.\n");
	return (0);
}*/