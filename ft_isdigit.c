/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:01:11 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 13:01:13 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (2048);
	}
	return (0);
}

//checks for a digit (0 through 9).

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
    int result;

    result = isdigit(51);
    printf("%d\n", result);

    result = ft_isdigit(51);
    printf("%d\n", result);
} */