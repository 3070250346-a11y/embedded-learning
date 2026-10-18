#include <stdio.h>

int main(void){
	int     age = 18;
	float   h   = 1.75f;
	char    ch  = 'A';
	double  pi  =3.1415926;

	printf("age=%d\n", age);
	printf("h=%.2f\n", h);
	printf("ch=%c\n", ch);
	printf("pi=%lf\n",pi);
	printf("十六进制=%x 八进制=%o\n", 255, 255);
	printf("字符串=%s\n", "hello");
        printf("百分号=%%\n");
	return 0;
}
