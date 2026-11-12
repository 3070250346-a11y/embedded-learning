#include <stdio.h>

void swap_wrong(int a, int b)
{
	int t = a; a = b; b = t;
}

void swap_right(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main(void)
{
	int x = 1, y = 2;
	
	swap_wrong(x, y);
	printf("swap_wrong 后: x=%d y=%d\n", x, y);

	swap_right(&x, &y);
	printf("swap_right 后: x=%d y=%d\n", x, y);
	return 0;
}
