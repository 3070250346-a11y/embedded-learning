#include <stdio.h>

int main(void){
	int a;
	printf("请输入一个数\n");
	scanf("%d", &a);
	a % 2 == 0 ? printf("偶数\n") : printf("奇数\n");
	return 0;
}
