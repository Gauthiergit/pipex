/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:14:16 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/18 15:35:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_display_nbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_display_nbr_hex(unsigned int nb, char format);
int		ft_display_ptr(unsigned long long ptr);
int		ft_display_unbr(unsigned int nb);
int		ft_printf(const char *str, ...);

#endif