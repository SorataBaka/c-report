#include <stdio.h>

int main(void)
{
	int	x, y, z;	// x * y = z
	int	i;		// カウンタ

	printf("非負整数 x, y > ");	// 問題を入力
	scanf("%d %d", &x, &y);

	z = 0;			// 積を初期化
	// 反復回数は既知なので for文
	for (i = 0; i < y; i++) {	// y 回繰り返す
		z = z + x;		// x を足す
	}

	printf("%d * %d = %d\n", x, y, z);	// 計算結果を表示

	return (0);
}