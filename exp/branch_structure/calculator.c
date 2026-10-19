#include <stdio.h>

int main(void){
	int a, b;
	char s;
	printf("请输入计算的数，用空格隔开\n");
	scanf("%d %d", &a, &b);
	printf("请输入你要进行哪种运算\n");
	scanf(" %c", &s);

	switch(s){
		case '+':
			printf("结果为%d\n",a+b);
			break;
		case '-':
			printf("结果为%d\n",a-b);
			break;
		case '*':
			printf("结果为%d\n",a*b);
			break;
		case '/':
			if(b == 0){
				printf("除数不可为0\n");
				break;
			}
			printf("结果为%d\n",a/b);
			break;
		default:
			printf("无效字符\n");
	}
	return 0;
}
