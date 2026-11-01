#include <stdio.h>

int main(void){
	int found = 0, target = 42;
	for (int i = 1; i<10 && !found; i++){
		for(int j = 1; j<10;j++){
			if (i*j == target){ found = 1; break;}
			printf("%d  %d\n", i, j);
		}
	}
	return 0;
}
