/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:40:02 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 10:40:04 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	current = lst;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
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
    t_list *HEAD;
    int count;

    HEAD = ft_lstnew("hello");
    HEAD->next = ft_lstnew("world");
    HEAD->next->next = ft_lstnew("!!!");
    count = ft_lstsize(HEAD);
    printf("count: %d\n", count);
} */