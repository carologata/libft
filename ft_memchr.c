/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:40:19 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 16:40:20 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	u;

	str = (unsigned char *)s;
	u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == u)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* The  memchr()  function  scans  the  initial n bytes of the memory area
pointed to by s for the first instance of c.  Both c and the  bytes  of
the memory area pointed to by s are interpreted as unsigned char.
The	memchr(void)  and memrchr() functions return a pointer to the matching
byte or NULL if the character does not occur in the given memory area.
It's possible to work whith array of int, but with some considereations.
 */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	int	*res;

	// int array[] = {0, 1, 2, 3, 4, 5};

	int tab[7] = {-49, 49, -5, -1, 0, -2, 2};

	// check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks(); //Cast check
	res = ft_memchr(tab, -1, 12);
	// int *res = memchr(tab, -1, 7);
	printf("%s\n", (char *)res);
	// int i = 0;
	// while(i < 4)
	// {
	//     printf("%c ", res[i]);
	//     i++;
	// }
}
 */