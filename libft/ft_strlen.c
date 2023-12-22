/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:07:10 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 11:07:10 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Don't be sorry, be better: 25 caracteres\n");
	printf("Resultat: %ld\n", ft_strlen("Don't be sorry, be better"));
}*/