#include <stdio.h>

void show(int a[])
{
	printf("函数内 sizeof(a) = %zu <-- 这是指针的大小！\n", sizeof(a));
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("main 里 sizeof(arr) = %zu\n", sizeof(arr));
	show(arr);
	return 0;
}
