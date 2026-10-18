#include <stdio.h>

int main(void){
	char name[20] = "石理想";
	int age = 23;
	float height = 1.78;
	char num[20] = "2025325110441";

	printf("姓名：     %s\n",name);
	printf("年龄：     %d\n",age);
	printf("身高：     %.2f\n",height);
	printf("学号：     %s\n",num);
	return 0;
}
