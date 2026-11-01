#include <stdio.h>
#include <stdint.h>

int main(void){
	char *s = NULL;

	if (s != NULL && s[0] == 'A'){
		printf("有内容\n");
	}else {
		printf("短路生效：没有解引用空指针，程序安全\n");
	}
	
	if(!s) printf("s 是空指针\n");

	int ret = -1;
	int val = (ret > 0) || (ret = 0);
	printf("ret=%d val=%d\n", ret, val);

	return 0;
}
