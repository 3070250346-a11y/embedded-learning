#include <stdio.h>

int *bad(void)
{
	int x = 5;
	return &x;
}

int main(void){int *p = bad(); return 0;}	
