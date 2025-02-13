/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:09:27 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 14:13:48 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int);

int	main(){
	int	c, result;

	printf("\nIngresa un caracter: ");
	scanf("%d", &c);
	result = ft_isascii(c);
	printf("\n%d", result);
	return (0);
};

int	ft_isascii(int c){
	if (c >= 0 && c <= 127){
		return (1);
	} else {
		return (0);
	}

};
