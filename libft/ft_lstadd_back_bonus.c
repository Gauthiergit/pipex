/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:48:11 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/12 10:47:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = NULL;
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
/*#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew("content 1");
	t_list *node2 = ft_lstnew("content 2");
	t_list *node3 = ft_lstnew("content 3");
	t_list *new = ft_lstnew("Splendide");
	t_list *result; 

	lst->next = node2;
	node2->next = node3;

	ft_lstadd_back(&lst, new);
	result = ft_lstlast(lst);
	printf("Attendu: Splendide / Sortie: %s", (char *)result->content);
	free(new);
	free(node2);
	free(node3);
	return(0);
}*/