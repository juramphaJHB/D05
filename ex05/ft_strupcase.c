#include <unistd.h>

char *ft_strupcase(char *str){

		if(*str >= 'a' && *str <= 'z'){
			*str = *str - 32;
		}

	return str;		
}