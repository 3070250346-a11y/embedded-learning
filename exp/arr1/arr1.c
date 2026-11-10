#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};

	for (int i = 0; i < 5; i++){
		printf("arr[%d] = %2d   地址 %p\n", i, arr[i], (void *)&arr[i]);
	}

	printf("sizeof(arr) = %zu 字节\n", sizeof(arr));
	printf("元素个数    = %zu\n", sizeof(arr)/sizeof(arr[0]));

	printf("地址差      = %ld 字节\n", (long)((char *)&arr[1] - (char *)&arr[0]));
	return 0;
}
