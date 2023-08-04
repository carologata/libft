/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:49:03 by cogata            #+#    #+#             */
/*   Updated: 2023/07/20 19:49:05 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_move_s_after_d(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	ft_move_s_before_d(char *d, const char *s, size_t n)
{
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (s > d)
		ft_move_s_after_d(d, s, n);
	else
	{
		ft_move_s_before_d(d, s, n);
	}
	return (dest);
}

/* First copies the src to a buffer and then move that data from 
buffer to the dest.
It's safer for overlaping places in memory cause it works with buffer.
The	memmove(void)  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
The	memmove(void) function returns a pointer to dest. */

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[8];
	size_t	n;
	int		i;
	char	src[8];
	int		i;

	src[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	// int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	//src = # # # # # # # #
	//dest =	# # # #
	// {1, 2, 1, 2, 3, 4, 7, 8};
    // ----
    //src =    # # # # # # # #
	//dest = # # # #
    // {1, 2, 3, 4, 3, 4, 7, 8};
	n = 4;
	i = 0;
	while (i < 8)
	{
		printf("%c ", src[i]);
		i++;
	}
	// printf("\nmmemove:\n");
    // memmove(src+10, src, (n * sizeof(char)));
    // i = 0;
	// while (i < 8)
	// {
	// 	printf("%c ", src[i]);
	// 	i++;
	// }
    printf("\nft_mmemove:\n");
	ft_memmove(src+10, src, (n * sizeof(char)));
#include <stdio.h>
int	main(void)
{
	src[8] = {0, 1, 2, 3, 4};
	ft_memmove(src, src+3, 12 * (sizeof(int)));
	
	i = 0;
	while (i < 48)
	{
		printf("%c ", src[i]);
		i++;
	}
	return(0);
}
	i = 0;
	while (i < 8)
	{
		printf("%c ", src[i]);
		i++;
	}
} */

/* #include <stdio.h>
int	main(void)
{
	char src[8] = {0, 1, 2, 3, 4};
	ft_memmove(src, src+3, 12 * (sizeof(int)));
	
	int i = 0;
	while (i < 48)
	{
		printf("%c ", src[i]);
		i++;
	}
	return(0);

} */