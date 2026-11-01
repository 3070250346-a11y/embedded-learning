#include <stdio.h>

int main(void){
	for (int i=1;i<10;i++){
		for (int j=1; j<10; j++){
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}

	int n = 5;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j<=n-i;j++) printf(" ");
		for (int k = 1; k <= 2*i - 1; k++) printf("*");
		printf("\n");
	}
}
