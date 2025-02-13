/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:24:36 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 17:55:47 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void	*dst, const void	*src, size_t	len);

int	main(){
	char	src[] = "Hola mundo";
	char	dst[20];

	ft_memmove(dst, src, 10);
	printf("\nsrc: %s", src);
	printf("\ndst: %s", dst);
	return (0);
};

void	*ft_memmove(void	*dst, const void	*src, size_t	len){
	unsigned char	*temp1;
	const unsigned char	*temp2;
	size_t	counter;

	if (!dst || !src){
		return (NULL);
	};

	temp1 = (unsigned char*)dst;
	temp2 = (const unsigned char*)src;
	counter = 0;
	if ( temp1 > temp2){
		while (len-- > 0){
			temp1[len] = temp2[len];
		}
	} else {
		while (counter < len){
			temp1[counter] = temp2[counter];
			counter++;
		}
	}
	return (dst);
};
