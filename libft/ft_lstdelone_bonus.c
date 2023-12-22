/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:42:07 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/10 11:40:49 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	delcontent(void *content)
{
	free(content);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>
int main()
{
	t_list	*lst = ft_lstnew(strdup("content 1"));
	t_list	*node2 = ft_lstnew(strdup("content 2"));
	t_list	*node3 = ft_lstnew(strdup("content 3"));
	t_list	*node4 = ft_lstnew(strdup("content 4"));

	lst->next = node2;
	node2->next = node3;
	node3->next = node4;

	ft_lstdelone(node3, &delcontent);
	if (lst)
		printf("%s\n", (char *)lst->content);
	else
		printf("NULL\n");
	if (node2)
		printf("%s\n", (char *)node2->content);
	else
		printf("NULL\n");
	if (node4)
		printf("%s\n", (char *)node4->content);
	else
		printf("NULL\n");
	free(lst->content);
	free(lst);
	free(node2->content);
	free(node2);
	free(node4->content);
	free(node4);
	return (0);
}*/