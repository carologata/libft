/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:39:32 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 11:39:33 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/* t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(1 * sizeof(t_list));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

#include <stdio.h>

int	main(void)
{
    t_list *new;
    char *s = "abcd";
    new = ft_lstnew(s);

    t_list *HEAD;
    char *t = "ABCD";
    HEAD = ft_lstnew(t);

    t_list **lst;
    lst = &HEAD;

    printf("Before:\n");
    printf("last node address: %p\n", HEAD->next);
    printf("new address: %p\n", new);

    ft_lstadd_back(lst, new);

    printf("After:\n");
    printf("last node address: %p\n", HEAD->next);
} */