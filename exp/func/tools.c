#include <stdio.h>

int max2(int a, int b)
{
	if (a>b){
		return a;
	}else{
		return b;
	}
}

int abs_i(int x)
{
	if(x<0){
		return -x;
	}else{
		return x;
	}
}

int is_even(int x)
{
	if(x%2 ==0){
		return 1;
	}else{
		return 0;
	}
}

int main(void)
{
	printf("max2(3,5)=%d\n", max2(3, 5));
	printf("abs_i(-7)=%d\n", abs_i(-7));
	printf("is_even(4)=%d\n", is_even(4));

	return 0;
}
