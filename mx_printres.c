#include "minilibmx.h"

void mx_printres(char *vyr) {
    int length=mx_strlen(vyr);
    int par1;
    int par2;
    int par3;
    char dia;
    for(int i = 0; i < length; i++) {
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
    mx_printint(par1);
    mx_printchar(' ');
    mx_printchar(dia);
    mx_printchar(' ');
    mx_printint(par2);
    mx_printstr(" = ");
    mx_printint(par3);
    mx_printchar('\n');
}

