/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:03:49 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:03:49 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int result = ft_isalpha('5');
	if (result)
		printf("Le caractere est bien une lettre\n");
	else
		printf("Le caractere n'est pas une lettre\n");

}*/