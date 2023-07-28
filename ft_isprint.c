/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:47:29 by cogata            #+#    #+#             */
/*   Updated: 2023/07/19 13:47:30 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	result;

	result = isprint('a');
	printf("%d\n", result);

	result = ft_isprint('a');
	printf("%d\n", result);
} */

//checks for any printable character including space.

/* SPACE ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` 
a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~  */