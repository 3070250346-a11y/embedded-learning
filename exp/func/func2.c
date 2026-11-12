#include <stdio.h>

void swap_wrong(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

int main(void)
{
	int x =1, y = 2;
	printf("调用前:x = %d y = %d\n", x, y);

	swap_wrong(x, y);

	printf("调用后: x = %d y = %d\n", x, y);
	return 0;
}
