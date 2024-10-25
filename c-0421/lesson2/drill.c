#include <stdio.h>
#include <stdlib.h>	// rand() を使うために必要

int main(void)
{
	int	x, y, z;	// 問題の数値 z = x/y;
	int	a;		// ユーザが入力する答案の数値
    int correct = 0;
    int incorrect = 0;

	printf("💩計算ドリル\n");	// タイトルを表示

	while (1) {
        system("clear");
		x = rand()%100 + 1;	// 1〜100の乱数を設定
		y = rand()%10 + 1;	// 1〜10の乱数を設定
		printf("♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪\n");
		printf("%d 個の💩をもらいました．\n", x);
		printf("%d 人で山分けしましょう．\n", y);
		printf("一人分は何個ですか？ > ");

// ====== 適切なコードを追加し，プログラムを完成しなさい ======
        // Enter user input
        scanf("%d", &a);
        z = x/y;
        if(a == z){
            printf("○\n");
            correct++;
        }else {
            incorrect++;
            printf("X: 正解は%dです\n", z);
        }
        char continueConfirmation;
        printf("進む？ はい「y」/　おしまい「n」> ");
        scanf(" %c", &continueConfirmation);
        if(continueConfirmation == 'n') break;
// ====== ここまで ======
	}
    system("clear");

    printf("会計 : %d\n", correct + incorrect);
    printf("正   : %d (%.2f%%)\n", correct, ((float)correct*100/(correct+incorrect)));
    printf("違   : %d (%.2f%%)\n", incorrect, ((float)incorrect*100/(correct+incorrect)));
	printf("おしまい．\n");
	return (0);
}
