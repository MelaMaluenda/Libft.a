/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:04:08 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 13:11:36 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int ft_isalpha(int);

int	main(){
	int	c, result;

	printf("Ingresa un numero: ");
	scanf("%d", &c);
	result = ft_isalpha(c);
	printf("%d", result);
	return (0);
};

int	ft_isalpha(int	c){
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		return (1);
	} else {
		return (0);
	};
};
