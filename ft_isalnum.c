/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:00:30 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 13:00:32 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0'
			&& c <= '9'))
	{
		return (8);
	}
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
    int result;

    result = isalnum(49);
    printf("%d\n", result);

    result = ft_isalnum(49);
    printf("%d\n", result);

    result = isalnum('#');
    printf("%d\n", result);

    result = ft_isalnum('#');
    printf("%d\n", result);
} */