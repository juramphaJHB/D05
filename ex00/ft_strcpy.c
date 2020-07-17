#include <unistd.h>

char *ft_strcpy(char *dest, char *src){
	
	int count = 0;
	
	while(src[count] != '\0'){
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