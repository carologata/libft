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
    size_t int_max;

    int_max = -1;

	if (size != 0 && (nmemb >= int_max / size))
		return (NULL);
    else if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
        size = 1;
	}
	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);
	ft_memset(r, 0, nmemb * size);
	return (r);
}

/* #include <stdio.h>

int	main(void)
{
    char *array;
    // int i;
    array = malloc(1 * sizeof(char));
    array[0] = 'a';
    array = ft_calloc(0, 0);
    if(array == NULL)
        printf("aqui");
    // i = 0;
    // while(i < 20)
    // {
    //     printf("%d, ", array[i]);
    //     i++;
    // }
    free(array);
} */