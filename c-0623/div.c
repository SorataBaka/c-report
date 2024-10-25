#include <stdio.h>

int division(int x, int y){
    int i;
    for(i = 0; x - y >= 0; i++) x -= y;
    return i;
}
int main(void)
{
	int	x, y ;// x / y = z
	printf("自然数 x, y > ");	// 問題を入力
	scanf("%d %d", &x, &y);
	printf("%d / %d = %d\n", x, y, division(x, y));	// 計算結果を表示

	return (0);
}