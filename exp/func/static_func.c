#include <stdio.h>

int counter(void)
{
	static int n = 0;
	return ++n;
}

static int internal_helper(int x)
{
	return x * 2;
}

int main(void)
{
	printf("%d %d %d\n", counter(), counter(), counter());
	printf("helper(21) = %d\n", internal_helper(21));
	return 0;
}
