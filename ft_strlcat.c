/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:11:00 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/20 18:13:19 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dst_size);

int	main(){
	char	dst[20] = "Hola ";
	const char	src[] = "Mundo!";
	size_t	result;

	result = ft_strlcat(dst, src, sizeof(dst));
	printf("\nResultado: %s", dst);
	printf("\nLongitud total: %zu", result);
	return (0);
};

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dst_size){
	
	size_t	src_lenght, dst_lenght, counter;

	src_lenght = 0;
	dst_lenght = 0;
	counter = 0;

	while (src[src_lenght] != '\0'){
		src_lenght++;
	};

	while(dst[dst_lenght] != '\0' && dst_lenght < dst_size){
		dst_lenght++;
	};

	if (dst_lenght == dst_size){
		return (dst_size + src_lenght);
	};

	while (src[counter] != '\0' && (dst_lenght + counter + 1) < dst_size){
		dst[dst_lenght + counter] = src[counter];
		counter++;
	}

	dst[dst_lenght + counter] = '\0';

	return (dst_lenght + src_lenght);
};
