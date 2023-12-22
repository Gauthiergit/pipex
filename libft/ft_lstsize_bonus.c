/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:31:49 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/10 11:43:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*current;

	if (lst == NULL)
		return (0);
	current = lst;
	len = 0;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
/*#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew("content 1");
	t_list *node2 = ft_lstnew("content 2");
	t_list *node3 = ft_lstnew("content 3");
	int	result;

	lst->next = node2;
	node2->next = node3;
	result = ft_lstsize(lst);
	printf("Nombre de noeuds = %d", result);
	free(lst);
	free(node2);
	free(node3);
}*/