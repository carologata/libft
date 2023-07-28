/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:29:13 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 15:29:14 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t			size;
	unsigned char	u;

	u = (unsigned char)c;
	size = ft_strlen(s);
	while (size + 1 > 0)
	{
		if (s[size] == u)
			return ((char *)&s[size]);
		size--;
	}
	return (0);
}

/* The strrchr() function returns a pointer to the last occurrence 
of the character c in the string s.
The	strchr(void) and strrchr() functions return a pointer  to  the  matched
character  or NULL if the character is not found.  The terminating null
byte is considered part of the string, so that if  c  is  specified  as
'\0', these functions return a pointer to the terminator. */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[9] = "Canoline";
	char *s;

	// s = ft_strrchr(str, 'n');
	s = strrchr(str, 'n');

	printf("%s\n", s);
} */