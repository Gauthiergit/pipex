/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_nbr_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:32:28 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/18 16:31:01 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int nb, char format)
{
	if (nb >= 16)
	{
		ft_putnbr_hex(nb / 16, format);
		ft_putnbr_hex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nb - 10 + 'a');
			if (format == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
}

int	ft_display_nbr_hex(unsigned int nb, char format)
{
	int	len;

	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_putnbr_hex(nb, format);
	len = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}
