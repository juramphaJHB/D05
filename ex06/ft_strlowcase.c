#include <unistd.h>

char *ft_strupcase(char *str){

		if(*str >= 'A' && *str <= 'Z'){
			*str = *str + 32;
		}

	return str;		
}
