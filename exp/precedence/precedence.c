#include <stdio.h>

int main(void){
	int a=1, b=2, c=3;
	printf("1) %d\n", a+b*c);
	printf("2) %d\n", (a+b)*c);
	printf("3) %d\n", !a&b);
	printf("4) %d\n", !(a&b));
	printf("5) %d\n", 2+3 << 1);
	printf("6) %d\n", 2 + (3 << 1));

	int i=5;
	int x = i++;
	int y = ++i;
	printf("x= %d y=%d i=%d\n", x,y,i);

	return 0;
}
