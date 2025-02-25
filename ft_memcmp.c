/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:56:37 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/25 11:56:41 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	str1[] = "Tetris";
	char	str2[] = "Pacman";
	int		result;

	result = ft_memcmp(str1, str2, 6);
	if (result == 0)
	{
		printf("\nLas cadenas son iguales.");
	}
	else if (result < 0)
	{
		printf("\nLas primera cadena (str1) es MENOR que la segunda(sr2).");
	}
	else
	{
		printf("\nLa primera cadena (str1) es MAYOR que la segunda (str2).");
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				counter;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (ss1[counter] != ss2[counter])
		{
			return (ss1[counter] - ss2[counter]);
		}
		counter++;
	}
	return (0);
}
