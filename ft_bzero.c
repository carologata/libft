/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:19:45 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 18:19:47 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	i;

	b = (char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>
#include <strings.h>
int	main(void)
{
	char str[8] = "Caroline";
	int i = 0;

	ft_bzero(&str[5], 3);
    // bzero(&str[5], 3);

	printf("%s\n", str);

	while (i < 8)
	{
		printf("%d ", str[i]);
        i++;
	}
} */
