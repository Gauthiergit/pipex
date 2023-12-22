/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:30:13 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/06 15:43:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
/*#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew("content 1");
	t_list *node2 = ft_lstnew("content 2");
	t_list *node3 = ft_lstnew("content 3");
	t_list	*result;

	lst->next = node2;
	node2->next = node3;
	result = ft_lstlast(lst);
	printf("Attendu: content 3 / Sortie: %s", (char *)result->content);
	free(lst);
	free(node2);
	free(node3);
	return(0);
}*/
