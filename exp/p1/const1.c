#include <stdio.h>

int main(void)
{
	int x = 1, y = 2;
	const int *p1 = &x;
	*p1 = 10;
	p1 = &y;
	return 0;
}
