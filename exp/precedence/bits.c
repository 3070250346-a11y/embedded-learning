#include <stdio.h>
#include <stdint.h>

int main(void){
	uint32_t reg = 0x00000000;

	reg |= (1u << 3);
	printf("置位 bit3      = 0x%08X\n", reg);
	
	reg &= ~(1u << 3);
	printf("清零 bit3      = 0x%08X\n", reg);

	reg ^= (1u << 0);
	printf("翻转 bit0      = 0x%08X\n", reg);

	uint32_t bit0 = (reg >> 0) & 1u;
	printf("读 bit0        = 0x%08X\n", bit0);

	printf("bit0 是否置位  = %s\n", (reg & (1u << 0)) ? "是" : "否");

	printf("~0u            = 0x%08X\n", ~0u);
	printf("1u << 31       = 0x%08X\n", 1u << 31);

	return 0;
}


