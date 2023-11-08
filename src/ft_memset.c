#include "libft.h"

void *ft_memset(void *str, char c, size_t n){
    int i = n;
    if(!n) {
        return NULL;
    }
	while (n--){
		*(char *)str++ = c;
    }
	return (str-i);
}