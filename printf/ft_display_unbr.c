/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_unbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:36:34 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/18 16:23:42 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_display_unbr(unsigned int nb)
{
	int	len;

	ft_putunbr(nb);
	len = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len + 1);
}
