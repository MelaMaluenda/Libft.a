/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:46 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/25 13:17:56 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	const char	*text;
	const char	*search_phrase;
	size_t		len_to_check;
	char		*result;

	text = "no puede más, necesita salir al mar, liberarse de todo";
	search_phrase = "necesita salir al mar";
	len_to_check = 100;
	result = ft_strnstr(text, search_phrase, len_to_check);
	if (result != NULL)
	{
		printf("\nEncontrado! La frase %s empieza en la posicion: %ld",
			search_phrase, result - text);
	}
	else
	{
		printf("\nNo se ha encontrado %s en los primeros %ld caracteres",
			search_phrase, len_to_check);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h;
	const char	*n;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len--)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n && len--)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
