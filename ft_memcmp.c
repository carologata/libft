/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:26:09 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 11:26:11 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    // int result;
	// char *str1 = "Amanda";
	// char *str2 = "Amande";
    // size_t n = 6;
	// result = ft_memcmp(str1, str2, n * sizeof(char));
	// printf("ft_memcmp: %d\n", result);
	// result = memcmp(str1, str2, n * sizeof(char));
	// printf("memcmp: %d\n", result);

    int result;
    int str1[] = {1, 2, 4, 5};
    int str2[] = {1, 2, 2, 5};    
	
	size_t n = 4;
	result = ft_memcmp(str1, str2, n * sizeof(int));
	printf("ft_memcmp: %d\n", result);
	result = memcmp(str1, str2, n * sizeof(int));
	printf("memcmp: %d\n", result);
} */