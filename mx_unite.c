//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <unistd.h>

//int mx_strlen(const char *s);
//char *mx_strnew(const int size);
//char *mx_strcpy(char *dst, const char* src);
#include "minilibmx.h"

char *mx_unit(char *par1, char *par2, char *par3, char dia) {
    char *res = mx_strnew(mx_strlen(par1) + mx_strlen(par2) + mx_strlen(par3) 
    + 8);
    mx_strcpy(res, par1);
    res[mx_strlen(par1)] = ' ';
    res[mx_strlen(par1) + 1] = dia;
    res[mx_strlen(par1) + 2] = ' ';
    mx_strcpy(&res[mx_strlen(par1) + 3], par2);
    mx_strcpy(&res[mx_strlen(par1) + 3 + mx_strlen(par2)], " = ");
    mx_strcpy(&res[mx_strlen(par1) + 6 + mx_strlen(par2)], par3);
    return res;
}

/*int main(int argc, char *argv[]) {
    argc=0;
    printf("%s\n", mx_unit(argv[1],argv[3],argv[4],argv[2][0]));
}*/
