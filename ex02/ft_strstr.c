#include <unistd.h>

 char *ft_strstr(char *str, char *to_find){
	
	int count = 0;
	int current;
	while(str[count] != '\0'){
		
		int find = 0;
		if (str[count] == to_find[find]){
			current = count;
			while(str[count] == to_find[find]){

				if(to_find[find + 1] == '\0'){
					return &str[current];
				}
				count++;
				find++;
			}
			count = current;
		}
		count++;
	}
	return "0";
}