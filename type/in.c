#include <stdio.h>

int main(void){
	int age;
	float score;

	printf("请输入年龄和成绩：");
	scanf("%d%f",&age ,&score);
	printf("年龄=%d, 成绩=%.1f\n",age, score);
	return 0;
}
