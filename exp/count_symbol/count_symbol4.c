#include <stdio.h>

int main(void){
	int a[5] = {0,1,2,3,4};
	printf("有%zu个元素\n", sizeof(a)/sizeof(a[0]));
	return 0;
}
