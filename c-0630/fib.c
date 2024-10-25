#include <stdio.h>


void fibPrint1(int x, int y, int nth){
    if(nth == 0) return;
    printf("%d ", x);
    return fibPrint1(y, x+y, nth - 1);
}

int Nthfib(int n){
    if(n < 2) return n;
    return Nthfib(n-1) + Nthfib(n-2);
    
}

int main(){
    int x;
    printf("入力　＞ ");
    scanf("%d", &x);
    int result = Nthfib(x); //第ｎのフィボナッチ数を計算する
    fibPrint1(1, 1, x); //毎フィボナッチ数を表示関数
    printf("\n%d\n", result);
}
/**　例：　表示されたプログラム
 *  入力　＞ 10
 *  1 1 2 3 5 8 13 21 34 55 
 *  55
*/