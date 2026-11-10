#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t fake_reg = 0x00000000;
	uint32_t *reg = &fake_reg;

	*reg |= (1u << 5);
	printf("reg = 0x%08X   0x%08X\n", fake_reg, *reg);
	
	*reg &= ~(1u << 5);
	printf("reg = 0x%08X\n", fake_reg);
	
	return 0;
}
