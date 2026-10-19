#include <stdio.h>

int main(void){
	char c;
	printf("请输入一个字符:\n");
	scanf("%c", &c);
	if (c >= '0' && c <= '9'){
		printf("数字\n");
	}else if(c >= 'a' && c <= 'z'){
		printf("小写字母\n");
	}else if(c >= 'A' && c <= 'Z'){
		printf("大写字母\n");
	}else{
		printf("无效字符\n");
	}
	return 0;
}
