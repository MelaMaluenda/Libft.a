/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:09:43 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/22 13:40:55 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		result;

	str1 = "Goku";
	str2 = "Doraemon";
	str3 = "Atori";
	str4 = "Ranma";
	result = ft_strncmp(str1, str2, 4);
	printf("\nComparando %s y %s con n = 4: %d", str1, str2, result);
	result = ft_strncmp(str3, str4, 3);
	printf("\nComparando %s y %s con n = 3: %d", str3, str4, result);
	result = ft_strncmp(str1, str3, 2);
	printf("\nComparando %s y %s con n = 2: %d", str1, str3, result);
	result = ft_strncmp(str2, str4, 0);
	printf("\nComparando %s y %s con n = 0: %d", str2, str4, result);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n && s1[counter] && s2[counter])
	{
		if (s1[counter] != s2[counter])
		{
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		}
		counter++;
	}
	if (counter < n)
		return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
	return (0);
}
