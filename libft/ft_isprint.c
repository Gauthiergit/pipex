/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:04:15 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:04:15 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int result = ft_isprint('5');
	if (result)
		printf("Le caractere est bien un imprimable\n");
	else
		printf("Le caractere n'est pas imprimable\n");
}*/