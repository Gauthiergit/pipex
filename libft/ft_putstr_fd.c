/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:52:23 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:52:23 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
/*#include <fcntl.h>
int main(void)
{
	int fd = open("fichier_test.txt", O_WRONLY);
	char str[] = "Don't be sorry, be better";

	ft_putstr_fd(str, fd);
	close(fd);
	return(0);
}*/