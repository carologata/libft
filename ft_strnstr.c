/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:13:38 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 13:13:39 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (*little == 0)
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && (i + j < len))
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/* The strnstr() function locates the first occurrence of the null-termi‐
nated string little  */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*big;
	char	*little;
	char	*res;
	size_t	len;

	big = "Hello wo woworld!!?";
	little = "wo";
	len = 20;
	res = ft_strnstr(big, little, len);
	printf("ft_strnstrn: %s\n", res);
}
 */
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *big = "lorem ipsum dolor sit amet";
	char *little = "";
	char *res;
	size_t len = 15;

	res = ft_strnstr(big, little, len);
	printf("ft_strnstrn: %s\n", res);

	// res = strstr(big, little);
	// printf("strnstrn: %s\n", res);
} */