#include <stdio.h>
#include <string.h>
int sign(int n){
    return n > 0 ? 1 : n == 0 ? 0 : -1;
}
void sign2(int n){
    if(n > 0) return (void)puts("+1");
    if(n < 0) return (void)puts("-1");
    return (void)puts("0");
}
int main(){
    int input;
    printf("整数 > ");
    scanf("%d", &input);

    // printf("%d\n", sign(input)); 一つの方法
    sign2(input); //２つの方法
    return 0;
}