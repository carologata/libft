/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:25:09 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 15:25:10 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char u;

	str = (unsigned char *)s;
	u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = u;
		i++;
	}
	return (s);
}

/* The  memset()  function  fills  the  first  n  bytes of the memory area
pointed to by s with the constant byte c.
The memset() function returns a pointer to the memory area s. */

/* #include <stdio.h>

int	main(void)
{
	size_t n = 5;
	char s[n];
	int c = 8;
	unsigned int i;

	ft_memset(s, c, n);

	i = 0;
	while(i < n)
	{
		printf("%d ", s[i]);
		i++;
	}
} */