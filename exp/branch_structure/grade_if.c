#include <stdio.h>

int main(void){
	int a;
	printf("输入成绩\n");
	scanf("%d", &a);
	if (a<60 && a>0){
		printf("不及格\n");
	}else if(a>=60 && a<70){
		printf("及格\n");
	}else if(a>=70 && a<=90){
		printf("良好\n");
	}else if(a>=90 && a<=100){
		printf("优秀\n");
	}else{
		printf("数据违法\n");
	}
	return 0;
}
