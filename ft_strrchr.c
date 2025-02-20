/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:02:56 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/20 20:25:58 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	palabra[] = "programacion";
	char	*letra_a;
	char	*letra_h;

	letra_a = ft_strrchr(palabra, 'a');
	if (letra_a)
	{
		printf("Primera aparicion letra 'a': %s\n", letra_a);
	}
	else
	{
		printf("El caracter no se encunetra\n");
	}
	letra_h = ft_strrchr(palabra, 'h');
	if (letra_h)
	{
		printf("Primera aparicion letra 'h': %s\n", letra_h);
	}
	else
	{
		printf("El caracter no se encunetra");
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*last_position;

	last_position = NULL;
	while (*s)
	{
		if (*s == c)
		{
			last_position = (char *)s;
		}
		s++;
	}
	if (last_position != NULL)
	{
		return (last_position);
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
