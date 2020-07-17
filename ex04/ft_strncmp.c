#include <unistd.h>

 int ft_strncmp(char *s1, char *s2, unsigned int n){
	int count = 0;
	while(*s1 != '\0' && count <= n){
		if(*s2 == '\0'){
			return 1;
		}
		if(*s1 < *s2){
			return -1;
		}
		if(*s2 > *s1){
			return 1;
		}
		s1++;
		s2++;
		count++;
	}
	if(*s1 == '\0' && *s2 == '\0'){
		return 1;
	}
	return 0;
}