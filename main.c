#include "minilibmx.h"

int main(int argc, char* argv[]) {
	enum e_error mistake = -1;

	if(argc != 5) {
		mx_printerr("usage: ./calc [operand1] [operation] [operand2] [result]\n");
        return -1;
	}
	if (mx_vopr(argv[4]) == -1)
		mistake = INCORRECT_RESULT;
	if (mx_vopr(argv[1]) == -1 || mx_vopr(argv[3]) == -1)
    		mistake = INCORRECT_OPERAND;
    	if (mx_znak(argv[2]) == 0)
    		mistake = INCORRECT_OPERATION;
    	if (mistake == INCORRECT_OPERATION || mistake == INCORRECT_OPERAND || mistake == INCORRECT_RESULT) {
    		pr_misstake(mistake, argv[1], argv[2], argv[3], argv[4]);
    		return -1;	
    	}
	char dia = mx_znak(argv[2]);
	if( dia == '?') {
		char *sum=mx_unit(argv[1],argv[3],argv[4], '+');
		char *sub=mx_unit(argv[1],argv[3],argv[4], '-');
		char *mul=mx_unit(argv[1],argv[3],argv[4], '*');
		char *div=mx_unit(argv[1],argv[3],argv[4], '/');
		mx_rec(sum);
		mx_rec(sub);
		mx_rec(mul);
		mx_rec(div);
		free(sum);
		free(sub);
		free(mul);
		free(div);
	} else if(mx_isdia(dia)) {
		char *str=mx_unit(argv[1],argv[3],argv[4], dia);
		mx_rec(str);
	} else {
	}
	return 0;
}
