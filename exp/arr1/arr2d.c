#include <stdio.h>

int main(void)
{
	int img[2][3] = {{1, 2, 3},{4, 5, 6}};

	for (int r = 0; r < 2; r++){
		for (int c = 0; c < 3; c++)
			printf("%d ", img[r][c]);
		printf("\n");
	}

	printf("img[0][0]=%p\n", (void *)&img[0][0]);
	printf("img[0][1]=%p  (+4)\n", (void *)&img[0][1]);
	printf("img[1][0]=%p  (+12)\n", (void *)&img[1][0]);

	printf("总大小 = %zu 字节 = 2 * 3 * 4", sizeof(img));
	return 0;
}
