#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};

	printf("正常访问: %d %d %d\n", arr[0], arr[1], arr[2]);

	arr[3] = 999;
	arr[-1] = 888;

	printf("越界后程序还活着 （这才是最可怕的）\n");
	return 0;
}
