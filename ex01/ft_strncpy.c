#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
	
	int count = 0;
	
	while(src[count] != '\0' && count <= n){
		dest[count] = src[count];
		count++;
	
	}

	int start = 0;
	while(start < count){
		return dest;
		start ++;
	}
	return dest;
}