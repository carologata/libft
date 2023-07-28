/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:26:21 by cogata            #+#    #+#             */
/*   Updated: 2023/07/22 14:26:22 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*nbr;
	int		i;
	int		sign;
	int		res;

	nbr = (char *)nptr;
	i = 0;
	sign = 1;
	res = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
	{
		i++;
	}
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign = -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		res = res * 10 + nbr[i] - '0';
		i++;
	}
	return (res * sign);
}

/* #include <stdlib.h>
#include <stdio.h>

int	main(void)
{
    char *nptr = "\n \t  \f     +2340fdfas006";
    int result;
    result = ft_atoi(nptr);
    printf("ft_atoi: %d\n", result);
    result = atoi(nptr);
    printf("atoi: %d\n", result);
} */