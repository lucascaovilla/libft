#include "libft.h"

void * ft_memccpy(void *dest, const void *src, char c, size_t n){
	char *ptr = dest;
	const char *p = src;
	const char * p_end = src + n;
	char ch = ~(char)c;

	
	for(; ;){
		if(ch == c || p > p_end) {
			break;
		}
		*ptr++ = ch = *p++;
	}
	if(p > p_end && ch != c){
		return NULL;
	}

	return ptr;
}
