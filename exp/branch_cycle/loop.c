#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) sum += i;
	printf("1+ ... +100 = %d\n", sum);

	int n = 0;
	while (n > 0) {n--;}
	printf("while后n = %d\n", n);

	do { printf("do-while至少执行一次\n");}while(0);

	int cnt = 0;
	for(;;){
		if(++cnt >= 3) break;
	}
	printf("无限循环跑了%d次\n", cnt);

	volatile int i;
	int loops = 0;
	for (i = 0; i < 100000; i++) loops++;
	printf("延时循环执行了%d次\n", loops);

	return 0;
}
