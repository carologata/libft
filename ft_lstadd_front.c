/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:46:44 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 09:46:45 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
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
int main(void)
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
    printf("HEAD address: %p\n", HEAD);
    printf("new next address: %p\n", new->next);

    ft_lstadd_front(lst, new);

    printf("After:\n");
    printf("new address: %p\n", new);
    printf("HEAD address: %p\n", HEAD);
    printf("new next address: %p\n", new->next);
} */