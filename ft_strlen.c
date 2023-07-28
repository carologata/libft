/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:51 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 14:01:54 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* the strlen() function calculates the length of the string pointed to by s,
excluding the terminating null byte ('\0') */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "Caroline";
	int result;

	result = ft_strlen(str);
	printf("%d\n", result);

	result = strlen(str);
	printf("%d\n", result);
} */