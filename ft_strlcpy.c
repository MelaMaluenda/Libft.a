
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);

int	main(){
	
	char	dest[20];
	const char	src[] = "Hello, world!";
	size_t	lenght;

	lenght = ft_strlcpy(dest, src, sizeof(dest));
	printf("Dest: %s", dest);
	printf("\nLenght of src: %zu", lenght);
	return (0);
};

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size){

	size_t	src_lenght;
	size_t	counter;

	src_lenght = 0;
	counter = 0;

	while(src[src_lenght] != '\0'){
		src_lenght++;
	};

	if (dst_size > 0){
	
		while( counter < (dst_size - 1) && src[counter] != '\0'){
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	} 

	return (src_lenght);
};
