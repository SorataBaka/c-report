#include <stdio.h>

int main(void)
{
	int	x = 123;
	double	y = 123.45;

	printf("正：\n");
	printf("x = %d\n", x);
	printf("y = %f\n", y);

	printf("誤：\n");
	printf("x = %f\n", x);	// 整数型は %d のハズ
	printf("y = %d\n", y);	// 実数型は %f のハズ

	return (0);
}