/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:31:19 by bmaluend          #+#    #+#             */
/*   Updated: 2025/02/13 16:57:23 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void	*s, size_t	n);

int	main(){
	char	array[10] = "Hola mundo";
	
	printf("\nAntes de ft_bzero: %s", array);
	ft_bzero (array, 5);
	printf("\nDespues de ft_bzero: %s", array);
	return (0);
};

void	ft_bzero(void	*s, size_t	n){
	size_t	lenght;
	char	*str;
	
	str = s;
	lenght = 0;
	while (lenght < n){
			str[lenght] = 0;
			lenght++;
	}
};
