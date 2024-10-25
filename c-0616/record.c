#include <stdio.h>
#define DATA_SIZE 3
int main(){
    int data[DATA_SIZE] = {};
    while(1){
        int i;
        printf("要素番号（-1 で終了）> ");
		scanf("%d", &i);	// 要素番号を入力
		if (i < 0) break;
        if (i >= DATA_SIZE) continue;

		printf("%d番目の整数データ > ", i);
        scanf("%d", &data[i]);

        printf("データ:\n");
        for(int j = 0; j < DATA_SIZE; j++){
            printf("%d番目のデータ　＞　%d\n", j, data[j]);
        }
    }
    return 0;
}