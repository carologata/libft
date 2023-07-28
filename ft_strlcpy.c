/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:17:06 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 11:17:09 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	src_len = i;
	if (size < 1)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* The strlcpy() function copies up to size - 1 characters from the 
NUL-terminated string src to dst, NUL-terminating the result. 
The	strlcpy(void) and strlcat() functions return the total length of the
string they tried to create.  For strlcpy() that means the length of src.
*/