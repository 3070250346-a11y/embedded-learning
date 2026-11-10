#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;

	printf("arr=%p  p=%p  &arr[0]=%p\n", (void *)arr, (void *)p, (void *)&arr[0]);

	printf("%d %d %d %d\n", arr[2], *(arr + 2), p[2], *(p + 2));

	printf("sizeof(arr)=%zu sizeof(p)=%zu\n", sizeof(arr), sizeof(p));
	return 0;
}
