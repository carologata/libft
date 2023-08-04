/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:11:29 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 15:11:30 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	u;

	str = (char *)s;
	u = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == u)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}

/* The	strchr(void) function returns a pointer to the first 
occurrence of the character c in the string s 
The	strchr(void) and strrchr() functions return a pointer  to  the  matched
character  or NULL if the character is not found.  The terminating null
byte is considered part of the string, so that if  c  is  specified  as
'\0', these functions return a pointer to the terminator.
*/

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    char *str = "Caroline";
    char *s;

    s = ft_strchr(str, 'l');
    // s = strchr(str, 'l');

    printf("%s\n", s);
} */