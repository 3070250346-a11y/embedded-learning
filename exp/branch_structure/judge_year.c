#include <stdio.h>

int main(void){
	int a;
	printf("请输入年份:\n");
	scanf("%d", &a);
	if ((a%4 == 0 && a%100 != 0) || a % 400 == 0){
		printf("闰年\n");
	}else{
		printf("不是闰年\n");
	}
	return 0;
}
