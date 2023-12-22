/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:20:25 by gpeyre            #+#    #+#             */
/*   Updated: 2023/10/03 10:20:25 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(*newlist));
	if (!newlist)
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
/*#include <stdio.h>
int main()
{
    // Test avec une chaine de caracteres
    char str[] = "C'est qui le meilleur ?";
    t_list* node_str = ft_lstnew(str);
    if (node_str)
        printf("Contenu : %s\n", (char*)node_str->content);
    // Test avec un entier
    int number = 42;
    t_list* node_int = ft_lstnew(&number);
    if (node_int)
        printf("Contenu : %d\n", *((int*)node_int->content));
    free(node_str);
    free(node_int);

    return 0;
}*/