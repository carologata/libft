/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:24:40 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 16:24:41 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/* The  strcmp()  function compares the two strings s1 and s2.
It  returns an integer less than, equal to, or greater than
zero if s1 is found, respectively, to be less than,  to  match,  or  be
greater than s2. */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    char *s1 = "Hall";
    char *s2 = "Halla";
    int result;

    result = ft_strncmp(s1, s2, 5);
    printf("%d\n", result);
} */