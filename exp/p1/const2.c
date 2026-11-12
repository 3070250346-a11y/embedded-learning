#include <stdio.h>

int main(void)
{
	int x = 1, y = 2;
	int * const p2 = &x;
	*p2 = 20;
	p2 = &y;
	return 0;
}
