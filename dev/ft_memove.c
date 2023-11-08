#include <stdio.h>
#include "libft.h"

void * ft_memove(void *dest, void *src, size_t n){
	while(n--){
		*(char *)dest++ = *(char *)src++;
	}
	free(src);
	src = NULL;
	return dest;
}

//build the tests for every function


