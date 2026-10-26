#include <stdio.h>
#include <stdint.h>

int main(void){
	uint8_t   a = 255;
	uint16_t  b = 65535;
	uint32_t  c = 0xFFFFFFFF;
	int8_t    d = -128;

	printf("uint8_t=%zu uint16_t=%zu uint32_t=%zu int8_t=%zu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	printf("a=%u b=%u c=%u d=%d\n",a, b, c, d);
	return 0;
}
