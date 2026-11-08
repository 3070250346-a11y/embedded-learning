#include <stdio.h>

int main(void){
	int adc = 2048;

	if (adc < 1000)
		printf("低电量\n");
	else if (adc < 3000)
		printf("正常\n");
	else
		printf("满电\n");

	const char *leve1 = (adc > 3000) ? "高" : "底";
	printf("leve1 = %s\n", leve1);

	int a = 0, b = 1;
	if (a)
		if (b) printf("内层if执行\n");
		else   printf("else 属于内层 if\n");

	if (a){
		if (b) printf("内层if执行\n");
	} else{
		printf("else属于外层if\n");
	}

	return 0;
}
