/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:03:59 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:03:59 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int result = ft_isascii('5');
	if (result)
		printf("Le caractere est bien dans la table ASCII\n");
	else
		printf("Le caractere n'est pas dans la table ASCII\n");
}*/