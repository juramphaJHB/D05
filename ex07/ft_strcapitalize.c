#include <unistd.h>

char *ft_strupcase(char *str){
		int i = 0;
		
		while(str[i] != '\0'){
			if(i == 0){
				if(str[i] >= 'a' && str[i] <= 'z'){
					str = str - 32;
					write(1, str, 1);
					continue;
				}
			}
			if(str[i] == ' '){
				if(str[i] >= 'a' && str[i] <= 'z'){
					str = str - 32;
					continue;	
			}else{
				if(str[i] >= 'A' && str[i] <= 'Z'){
					str = str + 32;	
				}
			}
			i++;
			}
			str++;
		}
		return str;	
}