/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:16:48 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 14:41:52 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int);

int	main(){
	int	c, result;
	
	printf("Ingresa un caracter imprimible: ");
	scanf("%d", &c);
	result = ft_isprint(c);
	printf("\n%d", result);
	return (0);
};

int	ft_isprint(int c){
	if (c >= 32 && c <= 126){
		return (1);
	} else {
		return (0);
	};
};
