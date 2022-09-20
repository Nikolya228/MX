//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <unistd.h>

//bool mx_isdigit(int c);
//int mx_strlen(const char *s);
//int mx_atoi(const char *str);
#include "minilibmx.h"

bool mx_isdia(char c) {
    if(c == '+' || c == '-'
    || c == '/' || c == '*'){
        return true;
    }
    return false;
}
bool mx_is_true(char *vyr) {
    int length=mx_strlen(vyr);
    int par1;
    int par2;
    int par3;
    char dia;
    for(int i = 0; i < length; i++){
        if(i==0){
            par1=mx_atoi(vyr);
        }
        if(mx_isdia(vyr[i])){
            dia=vyr[i];
            i+=2;
            par2=mx_atoi(&vyr[i]);
        }
        if(vyr[i]=='='){
            i+=2;
            par3=mx_atoi(&vyr[i]);
        }
    }
    if(dia =='+') {
        if(par1 + par2 == par3){
            return true;
        }
    }else if(dia =='-') {
        if(par1 - par2 == par3){
           return true;
        }
    }else if(dia =='/') {
        if(par1 / par2 == par3){
            return true;
        }
    }else if(dia =='*') {
        if(par1 * par2 == par3){
            return true;
        }
    }
    return false;
}

//int main() {
    //printf("h");
//    char str[]="10 + 10 = 20";
 //   printf("%d\n",mx_is_true(str));
  //  return 0;
//}
