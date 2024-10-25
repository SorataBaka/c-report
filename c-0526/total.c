#include <stdio.h>

int main(void)
{
	// int	total;	// 合計
	// int	x;		// データ
	// int	n, i;		// データの個数，カウンタ

	// // データの個数の入力
	// printf("データの個数 > ");
	// scanf("%d", &n);		// 個数を入力

	// // データの入力，合計の計算
	// total = 0;				// 合計を初期化
	// printf("%d 個の非負整数 > ", n);
	// for (i = 0; i < n; i++) {
	// 	scanf("%d", &x);	// データを入力
	// 	total += x;		// 合計を加算，total = total + x;
	// }

	// // 結果の表示
	// printf("合計 = %d\n", total);

	// return (0);


    // int input = 0;
    // int total = 0;
    // printf("複数個の非負整数（最後に -1）> ");
    // while(input >= 0){
    //     total += input;
    //     scanf("%d", &input);
    // }
    // printf("合計　＞　%d\n", total);
    // return 0;   

    int input = 0;
    int total = 0;
    printf("複数個の非負整数（最後に -1）> ");
    do {
        total += input;
        scanf("%d", &input);
    }while(input >= 0);
    printf("合計　＞　%d\n", total);
    return 0;
}