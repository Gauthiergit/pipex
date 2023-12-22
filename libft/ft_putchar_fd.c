/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:51:58 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:51:58 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
int main(void)
{
    int fd = open("fichier_test.txt", O_WRONLY);
    char c = 'g';

    ft_putchar_fd(c, fd);
    close(fd);
    return(0);
}*/