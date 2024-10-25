#include <stdio.h>

int div(int x, int y){
    if(x - y < 0) return 0;
    return 1 + div(x - y, y);
}

int main(){
    int	x, y ;// x / y = z
	printf("自然数 x, y > ");	// 問題を入力
	scanf("%d %d", &x, &y);
	printf("%d / %d = %d\n", x, y, div(x, y));	// 計算結果を表示
}