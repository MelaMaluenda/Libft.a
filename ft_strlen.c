/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:43:51 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 15:02:52 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(const char*);

int	main(){
	char	c1[] = "Hola mundo";
	char	c2[] = "Programando en C!";
	char	c3[] = "Que subidon";

	printf("\n%d", ft_strlen(c1));
	printf("\n%d", ft_strlen(c2));
	printf("\n%d", ft_strlen(c3));
	return (0);
};

int	ft_strlen(const char* cadena){
	size_t lenght;

	lenght = 0;
	while (cadena[lenght] != '\0'){
		lenght++;
	};
	return (lenght);
};
