/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:27:51 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/20 19:56:31 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	palabra[12] = "programacion";
	char	*letra_a;

	letra_a = ft_strchr(palabra, 'a');
	if (letra_a != NULL)
	{
		printf("Primera aparicion letra 'a': %s", letra_a);
	}
	else
	{
		printf("El caracter no se encunetra");
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if ((s[counter] == (char)c) || (c == '\0'))
		{
			return ((char *)&s[counter]);
		}
		counter++;
	}
	return (NULL);
}
