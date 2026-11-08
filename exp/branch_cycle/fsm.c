#include <stdio.h>
#include <stdint.h>

typedef enum {
	KEY_IDLE =0,
	KEY_DOWN,
	KEY_UP
} key_state_t;

static key_state_t key_fsm(key_state_t st, uint8_t leve1, int *press_cnt)
{
	switch (st){
	case KEY_IDLE:
		if (leve1) st = KEY_DOWN;
		break;
	case KEY_DOWN:
		if (!leve1){
			st = KEY_UP;
			(*press_cnt)++;
		}
		break;
	case KEY_UP:
		st = KEY_IDLE;
		break;
	default:
		st = KEY_IDLE;
		break;
	}
	return st;
}

int main(void)
{
	key_state_t st = KEY_IDLE;
	int cnt = 0;

	uint8_t seq[] = {1,1,0,0,1,0,0};

	for (int i = 0;i < (int)(sizeof(seq) / sizeof(seq[0])); i++){
		st = key_fsm(st ,seq[i] ,&cnt);
		printf("采样%d: 电平=%u 状态=%d 记数=%d\n",i+1, seq[i], (int)st, cnt);
	}
	printf("总共按下%d次\n", cnt);
	return 0;
}
