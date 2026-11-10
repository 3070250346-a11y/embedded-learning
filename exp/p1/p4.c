#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = &arr[0];
	int *q = &arr[4];

	printf("q - p = %ld   (元素个数，不是字节数) \n", (long)(q - p));
	printf("字节差= %ld\n", (long)((char *)q - (char *)p));

	for (int *it = arr; it < arr + 5; it++)
		printf("%d ", *it);
	printf("\n");

	return 0;
}
