/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:04:15 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/10 11:40:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	delcontent(void *content)
{
	free(content);
}

void	modify_with_g(void *elem)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)elem;
	while (str[i])
	{
		str[i] = 'g';
		i++;
	}
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!lst || !f)
		return ;
	while (current->next != NULL)
	{
		f(current->content);
		current = current->next;
	}
	f(current->content);
}
/*#include <stdio.h>
int main()
{
	t_list	*lst = ft_lstnew(ft_strdup("content 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("content 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("content 3"));
	t_list	*node4 = ft_lstnew(ft_strdup("content 4"));
	t_list	*current;
	int i;

	lst->next = node2;
	node2->next = node3;
	node3->next = node4;

	ft_lstiter(lst, modify_with_g);
	current = lst;
	i = 1;
	while (current->next != NULL)
	{
		printf("Contenue %d modifie en 'g': %s\n", i, (char *)current->content);
		current = current->next;
		i++;
	}
	printf("Contenue %d modifie en 'g': %s\n", i, (char *)current->content);
	ft_lstclear(&lst, delcontent);
	return (0);
}*/