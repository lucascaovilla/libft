#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void * src, size_t n){
    if(!n) {
        return NULL;
    }
    while(n--){
		*(char *)dest++ = *(char *)src++;
    }
    return dest;
}