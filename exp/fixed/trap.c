#include <stdio.h>
#include <stdint.h>

int main(void){
	uint8_t x = 255;
	x += 1;
	printf("255+1=%u\n",x);

	int i = -1;
	unsigned int u = 1;
	if (i > u) printf("i > u 成立 （反直觉）\n");
	else       printf("i > u 不成立\n");

	uint8_t p = 200,q = 100;
	int sum = p + q;
	uint8_t sum8 = p + q;
	printf("sum=%d   sum8=%u\n",sum, sum8);

	return 0;
}
