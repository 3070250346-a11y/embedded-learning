#include <stdio.h>

int main(void){
	int a=7, b=2;
	printf("%d\n",a/b);
	printf("%lf\n", a/(double)b);
	printf("%lf\n",(double)a/b);
	return 0;
}
