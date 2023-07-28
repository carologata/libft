/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:01:34 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 16:01:35 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	int		i;

	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* The  strdup() function returns a pointer to a new string which is a 
duplicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).
On  success,  the strdup() function returns a pointer to the duplicated
string.  It returns NULL if insufficient memory was available, with er‐
rno set to indicate the cause of the error.*/

/* #include <stdio.h>

int	main(void)
{
	char *str = "Caroline";
	char *dest = ft_strdup(str);

	printf("%s\n", dest);
} */