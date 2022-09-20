#include "minilibmx.h"

char mx_znak(char *s) {
	int i = 0;
	
	while (s[i] != 0) {
		if (mx_isspace(s[i])) {
			i++;
			continue;
		}
		else if (s[i] == '-')
			return '-';
		else if (s[i] == '+')
			return '+';
		else if (s[i] == '*')
			return '*';
		else if (s[i] == '/')
			return '/';	
		else if (s[i] == '?')
			return '?';
		else
			return 0;
	}
	return 0;
}
