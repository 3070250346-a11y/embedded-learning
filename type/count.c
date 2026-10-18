#include <stdio.h>

int main(void){
	int r;
	float pi = 3.14;
	printf("请输入半径：");
	scanf("%d", &r);
	printf("周长为：  %.2f\n",2*pi*r);
	printf("面积为：  %.2f\n",pi*r*r);
	return 0;
}
