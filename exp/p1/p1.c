#include <stdio.h>

int main(void)
{
	int a = 42;
	int *p = &a;

	printf("a 的值      = %d\n", a);
	printf("&a的地址    = %p\n", (void *)&a);
	printf("p 的值      = %p\n", (void *)p);
	printf("*p的值      = %d\n", *p);

	*p = 100;
	printf("改完后的 a  = %d\n", a);

	printf("sizeof(int)=%zu  sizeof(int*)=%zu\n",sizeof(int), sizeof(int*));
	return 0;
}
