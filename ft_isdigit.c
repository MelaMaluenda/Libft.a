/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:14:09 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 13:37:30 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int);

int	main(){
	char	c;
	int	result;

	printf("\nIngresa un caracter: ");
	scanf("%c", &c);
	result = ft_isdigit(c);
	printf("\n%d", result);
	return (0);
};

int	ft_isdigit(int c){
	if (c >= '0' && c <= '9'){
		return (1);
	} else {
		return (0);
	};
};
