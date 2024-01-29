/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:34:43 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 17:34:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

void print_error(int choice, int error, const char *str)
{
    if (choice > 0)
        ft_printf("Error %s\n", str);
    else
        ft_printf("Error %s: %s\n", str, strerror(error));
    exit(1);
}
