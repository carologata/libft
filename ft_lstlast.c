/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:59:40 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 10:59:41 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		if (current->next == NULL)
			return (current);
		current = current->next;
	}
	return (NULL);
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
	t_list *last;

	HEAD = ft_lstnew("hello");
	HEAD->next = ft_lstnew("world");

	last = ft_lstlast(HEAD);

	printf("%s\n", (char *)last->content);
} */