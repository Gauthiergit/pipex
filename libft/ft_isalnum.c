/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:03:32 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:03:32 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int result = ft_isalnum('5');
	if (result)
		printf("Le caractere est bien une lettre ou un chiffre\n");
	else
		printf("Le caractere n'est pas une lettre ou un chiffre\n");

}*/