/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:44:51 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 13:56:20 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int);

int	main(){
	int	c, result;

	printf("\nIngresa un caracter: ");
	scanf("%d", &c);
	result = ft_isalnum(c);
	printf("\n%d", result);
	return (0);
};

int	ft_isalnum(int c){
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9')){
		return (1);
	} else {
		return (0);
	};
};
