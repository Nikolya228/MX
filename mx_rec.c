//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <unistd.h>

//int mx_strlen(const char *s);
//char *mx_strcpy(char *dst, const char* src);
//char *mx_strdup(const char *str);
//bool mx_is_true(char *vyr);
#include "minilibmx.h"

void mx_rec(char *vyr) {
    int is=0;
    for(int i = 0; i < 10; i++) {
        int j = 0;
        while(vyr[j] != '?') {
            if(vyr[j] == '\0') {break;}
            j++;
        }
        if(vyr[j] == '?') {
            char *t=mx_strdup(vyr);
            t[j] = i + '0';
            mx_rec(t);
            free(t); 
        }else if(vyr[j] == '\0') {
            if(mx_is_true(vyr)) {
             is=1;   
            }
            
        }

    }
    if(is==1){
    mx_printres(vyr);
    }
}

//int main() {
    //printf("h");
//    char str[]="-3 + -?4 = -2?";
//    mx_rec(str);
//    return 0;
//}
