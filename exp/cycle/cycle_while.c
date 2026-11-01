#include <stdio.h>

int main(void){
	int i = 1;
	while(i<=5){
		printf("当前数值:%d\n", i);
		i++;
	}
	int j = 1;
	do {
		printf("当前数值:%d\n",j);
		j++;
	}while(j<=5);

	return 0;
}

