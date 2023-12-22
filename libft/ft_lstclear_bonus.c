/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:51:30 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/12 16:06:18 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	delcontent(void *content)
{
	free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*futur;

	current = *lst;
	if (!lst || !(*lst) || !del)
		return ;
	while (current->next != NULL)
	{
		futur = current->next;
		ft_lstdelone(current, del);
		current = futur;
	}
	ft_lstdelone(current, del);
	*lst = NULL;
}
/*#include <stdio.h>
int main()
{
	t_list	*lst = ft_lstnew(ft_strdup("content 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("content 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("content 3"));
	t_list	*node4 = ft_lstnew(ft_strdup("content 4"));

	lst->next = node2;
	node2->next = node3;
	node3->next = node4;

	ft_lstclear(&lst, &delcontent);
	if (lst)
		printf("%s\n", (char *)lst->content);
	else
		printf("NULL\n");
	//Valgrind pour verifier que tout a ete free
	return (0);
}*/