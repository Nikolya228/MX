#include "minilibmx.h"

int mx_vopr(char *str) {
	int result = 0;
	int i = 0;
	
	while (str[i] != '\0') {
  		if (mx_isspace(str[i])){
  			i++;
   			continue;
   		}
  		else if (mx_isdigit(str[i]))
   			break;
   		else if (str[i] == '?') {
   			break;
   		}
   		else if (str[i] == '-' || str[i] == '+') {
   			i++;
   			continue;
   		}
  		else
   			return -1;
 		}
 
 	while (str[i] != '\0')	{
  		if (mx_isdigit(str[i])) {
   			i++;
   			continue;
  		}
  		else if (str[i] == '?'){
  			result = result * 10 + i + 1;
  			i++;
  			continue;
  		}	
  		else{
   			return -1;
   		}
 	}
 
 	return result;
}

int mx_lengh(char *str) {
	int result = 0;
	int i = 0;
	
	while (str[i] != '\0') {
  		if (mx_isspace(str[i])){
  			i++;
   			continue;
   		}
  		else if (mx_isdigit(str[i]))
   			break;
   		else if (str[i] == '?') {
   			break;
   		}
  		else
   			return -1;
 		}
 
 	while (str[i] != '\0')	{
  		if (mx_isdigit(str[i])) {
  			result++;
   			i++;
   			continue;
  		}
  		else if (str[i] == '?'){
  			result++;
  			i++;
  			continue;
  		}	
  		else{
   			break;
   		}
 	}
 
 	return result;
}

void pr_misstake(enum e_error m, char* a, char* b, char* c, char* d) {
	switch (m) {
        	case INCORRECT_OPERATION:
            		mx_printerr("Invalid operation: ");
            		mx_printerr(b);
            		mx_printerr("\n");
            		break;
        	case INCORRECT_RESULT:
             		mx_printerr("Invalid result: ");
             		mx_printerr(d);
             		mx_printerr("\n");
             		break;
             	case INCORRECT_OPERAND:
             		mx_printerr("Invalid operand: ");
             		if (mx_vopr(a) == -1)
             			mx_printerr(a);
             		else mx_printerr(c);
             		mx_printerr("\n");
             		break;
    	}
}
