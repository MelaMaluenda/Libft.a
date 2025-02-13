/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:06:14 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 15:44:59 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void* b, int c, size_t len);

int	main(){
	char	array[10];
	size_t	len = 10; //numero de bytes que queremos llenar
	int	c = 42; //valor que queremos llenar en cada uno de los bytes
	
	ft_memset(array, c, len);
	printf("Array almacenandose: ");
	for (size_t counter = 0; counter < len; counter++){
		printf("%c", array[counter]);
	};
	printf("\n");
	return (0);
};

void	*ft_memset(void* b, int	c, size_t len){
	unsigned char	*temp;
	
	temp = (unsigned char *)b;
	while(len > 0){
		*(temp) = (unsigned char)c;
		temp++;
		len--;
	};
	return (b);
};
