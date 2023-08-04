/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:41:48 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 16:41:50 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	aux = new;
	lst = lst->next;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		aux->next = temp;
		aux = temp;
		lst = lst->next;
	}
	return (new);
}

/* void	*ft_teste(void *content)
{
	return (content);
}

void	ft_delete(void *c)
{
	int	*s;

	s = (int *)c;
}

#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*temp;
	t_list	*aux;
	t_list	*new;
	int		i;

	i = 0;
	temp = ft_lstnew("A");
	head = temp;
	aux = head;
	i++;
	while (i < 5)
	{
		temp = ft_lstnew("ABC");
		aux->next = temp;
		aux = temp;
		i++;
	}
	temp = ft_lstnew("B");
	aux->next = temp;
	aux = temp;
	new = ft_lstmap(head, ft_teste, ft_delete);
	i = 0;
	while (i < 6)
	{
		printf("node %d: %s\n", i, (char *)new->content);
		new = new->next;
		i++;
	}
} */