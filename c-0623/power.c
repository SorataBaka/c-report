#include <stdio.h>
int power(int x, int y){
    int z = 1;
    for(int i = 0; i < y; i++) z*=x;
    return z;
}
int main(void)
{
	int x, y, z;
	int i;

	// 入力部
	printf("x, y > ");
	scanf("%d %d", &x, &y);
	// 出力部
	printf("%d^%d = %d\n", x, y, power(x, y));

	return (0);
}