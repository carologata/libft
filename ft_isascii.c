/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:46:29 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 13:46:31 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/* checks whether c is a 7-bit unsigned char value 
that fits into the ASCII character set. 0...127 */

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
    int result;

    result = isascii(126);
    printf("%d\n", result);  

    result = ft_isascii(126);
    printf("%d\n", result); 
} */
