#include <stdio.h>

int add(int a, int b);

int main(void)
{
	int r = add(3, 4);
	printf("3 + 4 = %d\n", r);
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
