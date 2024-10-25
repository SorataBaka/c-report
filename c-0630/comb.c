#include <stdio.h>
long long int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
}
long long int comb1(int n, int r){
    //第１の法則
    return fact(n)/(fact(r)*fact(n-r));
}
long long int comb2(int n, int r){
    //第２法則
    if (r == 0 || r == n) return 1;
    return comb2(n-1, r-1) + comb2(n-1, r);
}
int main(){
    int n, r;
    printf("入力 nCr　(n, r) ＞ ");
    scanf(" %d %d", &n, &r);
        if(n < r || n < 0 || r < 0) {
        printf("n ≥ r ≥ 0 を入力してください\n");
        return -1;
    }
    printf("第１法則 nCr C(%d, %d) = %lld\n", n, r, comb1(n, r));
    printf("第２法則 nCr C(%d, %d) = %lld\n", n, r, comb2(n, r));
    return 0;
}
/**　例：　表示されたプログラム
  *  入力 nCr　(n, r) ＞ 10 2
  *  第１法則 nCr C(10, 2) = 45
  *  第２法則 nCr C(10, 2) = 45
  */   