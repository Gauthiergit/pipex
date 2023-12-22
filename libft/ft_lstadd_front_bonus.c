/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:22:40 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/12 10:55:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew(ft_strdup("content 1"));
	t_list *node2 = ft_lstnew(ft_strdup("content 2"));
	t_list *node3 = ft_lstnew(ft_strdup("content 3"));
	t_list *new = ft_lstnew(ft_strdup("Splendide"));

	lst->next = node2;
	node2->next = node3;

	ft_lstadd_front(&lst, new);
	printf("Contenue: %s", (char *)lst->content);
	ft_lstclear(&lst, delcontent);
	return(0);
}*/