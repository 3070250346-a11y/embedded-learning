#include <stdio.h>

int main(void)
{
	int x = 1, y = 2;
	const int * const p3 = &x;
	*p3 = 30;
	p3 = &y;
	return 0;
}
