/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:33:26 by cogata            #+#    #+#             */
/*   Updated: 2023/07/20 15:33:27 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = (const char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* The memcpy() function copies n bytes from memory area src to memory
area dest. The memory areas must not overlap 
(otherwise it can lead an unexpected behavior).
THe original memcpy() usually do not lead to this unexpected behavior because 
of the compiler. */

/* When it's an array of int, it works as an array of char,
	but the bytes goes 4 to 4 
int is 4 bytes. */

/* #include <stdio.h>

int	main(void)
{
	// char src[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	
	//src = # # # # # # # #
	
	//dest =	# # # # 
	

	// {1, 2, 1, 2, 3, 4, 7, 8};

	size_t n = 4;

	int i = 0;
	while (i < 8)
	{
		printf("%d ", src[i]);
		i++;
	}

	printf("\n");

	ft_memcpy(src + 2, src, (n *sizeof(int)));

	i = 0;
	while (i < 8)
	{
		printf("%d ", src[i]);
		i++;
	}
} */