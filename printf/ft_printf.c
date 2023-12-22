/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:41:26 by gpeyre            #+#    #+#             */
/*   Updated: 2023/12/06 16:25:58 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_option(va_list ap, char format)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
		len += ft_display_nbr(va_arg(ap, int));
	else if (format == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (format == 'u')
		len += ft_display_unbr(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_display_nbr_hex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		len += ft_putchar('%');
	else if (format == 'p')
		len += ft_display_ptr(va_arg(ap, unsigned long long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_option(ap, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
/*# include <stdio.h>
int	main()
{
	int i = 42;
	void *ptr = &i;
	ft_printf(" %d %d %d %d %d %d %d\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	fflush(stdout);
	printf(" %d %d %d %d %d %d %d\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	write(1 , "\n", 1);
	ft_printf("Ma lettre: %c et la suite\n", 'z');
	fflush(stdout);
	printf("Ma lettre: %c et la suite\n", 'z');
	write(1 , "\n", 1);
	ft_printf("Ma phrase: %s et la suite\n", "Life is a highway");
	fflush(stdout);
	printf("Ma phrase: %s et la suite\n", "Life is a highway");
	write(1 , "\n", 1);
	ft_printf("Mon nombre unsigned: %u et la suite\n", 46767);
	fflush(stdout);
	printf("Mon nombre unsigned: %u et la suite\n", 46767);
	write(1 , "\n", 1);
	ft_printf(" %x %x %x %x %x %x %x\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	fflush(stdout);
	printf(" %x %x %x %x %x %x %x\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	write(1 , "\n", 1);
	ft_printf(" %X %X %X %X %X %X %X\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	fflush(stdout);
	printf(" %X %X %X %X %X %X %X\n", 2147483647, -2147483648,
	+2147483647, -2147483647, 4294967295, 0, -42);
	write(1 , "\n", 1);
	ft_printf("Mon caractere: '%%' et la suite\n");
	fflush(stdout);
	printf("Mon caractere: '%%' et la suite\n");
	write(1 , "\n", 1);
	ft_printf("Mon pointeur void : %p et la suite\n", 0);
	fflush(stdout);
	printf("Mon pointeur void : %p et la suite\n", 0);
	write(1 , "\n", 1);
	ft_printf("Mon nombre: %d et ma phrase: %s\n", -6867, "life is a highway");
	fflush(stdout);
	printf("Mon nombre: %d et ma phrase: %s\n", -6867, "life is a highway");
	write(1 , "\n", 1);
	ft_printf("%\n");
	fflush(stdout);
	printf(" NULL %s NULL \n", NULL);
	return (0);
}*/