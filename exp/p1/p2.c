#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t x = 0x12345678;

	uint8_t *b = (uint8_t *)&x;
	uint32_t *w = &x;
	printf("&b[0] = %p , value b[0] = %02X\n", &b[0], b[0]);
        printf("&b[1] = %p , value b[1] = %02X\n", &b[1], b[1]);

	printf("b[0...3] = %02x %02x %02x %02x\n", b[0], b[1], b[2], b[3]);
	printf("*w       = 0x%08X\n", *w);

	printf("uint8_t*  +1 -> %+ld 字节\n", (long)((char *)(b + 1) - (char *)b));
	printf("uint32_t* +1 -> %+ld 字节\n", (long)((char *)(w + 1) - (char *)w));

	return 0;
}
