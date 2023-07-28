/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:50:07 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 14:50:08 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);
	ft_memset(r, 0, nmemb * size);
	return (r);
}

/* #include <stdio.h>
int	main(void)
{
    int *array;
    int i;

    array = ft_calloc(7, 4);
    i = 0;
    while(i < 20)
    {
        printf("%d, ", array[i]);
        i++;
    }
} */
