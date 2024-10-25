#include <stdio.h>

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
}
int factAlt(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}

int main(){
    printf("%d\n", factAlt(4));
}