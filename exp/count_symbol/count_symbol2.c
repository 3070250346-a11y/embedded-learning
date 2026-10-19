#include <stdio.h>

int main(void){
	int a;
	printf("请输入秒数:\n");
	scanf("%d", &a);
	printf("%d-%d-%d", a/(60*60), (a % (60*60)) / 60, a % 60);
	return 0;
}
