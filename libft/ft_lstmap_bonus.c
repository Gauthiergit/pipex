/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:20:15 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/13 17:57:12 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	delcontent(void *content)
{
	free(content);
}

void	*modify_with_g(void *elem)
{
	int	i;
	char	*str;

	if (!elem)
		return(NULL);
	i = 0;
	str = (char *)elem;
	while (str[i])
	{
		str[i] = 'g';
		i++;
	}
	return((void *)str);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new_list = ft_lstnew(ft_strdup(f(lst->content)));
		if (!new_list)
		{
			ft_lstdelone(new_list, del);
			new_list = NULL;
			return (NULL);
		}
		ft_lstadd_back(&start, new_list);
		lst = lst->next;
	}
	return (start);
}
/*#include <stdio.h>
int main()
{
	t_list	*lst = ft_lstnew(ft_strdup("content 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("content 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("content 3"));
	t_list	*node4 = ft_lstnew(ft_strdup("content 4"));
	t_list	*current;
	t_list	*new_list;
	int i;

	lst->next = node2;
	node2->next = node3;
	node3->next = node4;

	new_list = ft_lstmap(lst, &modify_with_g, delcontent);
	current = new_list;
	i = 1;
	while (current->next != NULL)
	{
		printf("Contenue %d modifie avec 'g': %s\n", i, (char *)current->content);
		current = current->next;
		i++;
	}
	printf("Contenue %d modifie avec 'g': %s\n", i, (char *)current->content);

	ft_lstclear(&lst, delcontent);
	ft_lstclear(&new_list, delcontent);

	return (0);
}*/