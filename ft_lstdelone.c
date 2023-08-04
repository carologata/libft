/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:31:58 by cogata            #+#    #+#             */
/*   Updated: 2023/08/02 13:31:59 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

/* int main(void)
{
    t_list *HEAD;
    t_list *new;
    char *s;
    char *c;
    s = "Caroline";
    c = "Ogata";
    HEAD = ft_lstnew(s);
    new = ft_lstnew(c);
    
    HEAD->next = new;
} */