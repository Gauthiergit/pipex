/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:04:07 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:04:07 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int result = ft_isdigit('5');
	if (result)
		printf("Le caractere est bien un chiffre\n");
	else
		printf("Le caractere n'est pas un chiffre\n");

}*/