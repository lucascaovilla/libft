#include "libft.h"

void ft_bzero(void *dst, size_t n){
    int i = n;
    while (n--){
	    *(char *)dst++ = '0';
    }
    dst = dst-i;
}