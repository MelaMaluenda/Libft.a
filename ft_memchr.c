/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:09:35 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/25 10:53:53 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	str[] = "Hola mundo!";
	char	search;
	char	*result;

	search = 'm';
	result = (char *)ft_memchr(str, search, sizeof(str));
	if (result != NULL)
	{
		printf("\nCaracter encontrado: %c en la posicion %ld",
			*result, result - str);
	}
	else
	{
		printf("\nCaracter no encontrado");
	}
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ss;
	size_t			counter;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	counter = 0;
	while (counter < n)
	{
		if (ss[counter] == cc)
		{
			return ((void *) &ss[counter]);
		}
		counter++;
	}
	return (NULL);
}
