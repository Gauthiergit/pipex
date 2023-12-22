/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:52:05 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:52:05 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*#include <fcntl.h>
int main(void)
{
	int fd = open("fichier_test.txt", O_WRONLY);
	char str[] = "Don't be sorry, be better, et saute une ligne aussi";

	ft_putendl_fd(str, fd);
	close(fd);
	return(0);
}*/