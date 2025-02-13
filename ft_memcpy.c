/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:00:08 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 17:22:54 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void	*src, size_t	n);

int	main(){
	char	src[] = "Hola mundo";
	char	dst[20];

	ft_memcpy(dst, src, 10);
	printf("src: %s", src);
	printf("\ndst: %s", dst);
	return (0);
};

void	*ft_memcpy(void	*dst, const void	*src, size_t	n){
	unsigned char	*temp1, *temp2;

	temp1 = (unsigned char*)dst;
	temp2 = (unsigned char*)src;

	while ( n > 0){
		*(temp1++) = *(temp2++);
		n--;
	};
	return (dst);
};
