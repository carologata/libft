/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:15:19 by cogata            #+#    #+#             */
/*   Updated: 2023/07/21 12:15:20 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	char str[20] = "Hello545DF4&*&$@Fdfa";
	char res[20];

	int i = 0;
	while (i < 20)
	{
		res[i] = ft_toupper(str[i]);
        printf("%c", res[i]);
		i++;
	}
} */