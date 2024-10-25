#include <stdio.h>
int main(){
    for(int i = 1; i <= 9; i++){
        printf("%2dの段：", i);
        for(int j = 1; j <= 9; j++){
            printf(" %2d", i * j);
        }
        printf("\n");
    }
    return 0;
}