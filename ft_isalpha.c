/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:01:01 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 13:01:04 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int main(void)
{
    int result;

    result = ft_isalpha(-15);
    printf("%d\n", result);

    result = isalpha(-15);

    printf("%d\n", result);
} */