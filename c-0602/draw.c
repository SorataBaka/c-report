#include <stdio.h>

int main(){
    int length;
    printf("長さを入力してください　＞　");
    scanf("%d", &length);
    for(int i = 0; i < length; i++){
        for(int j = 0; j < i + 1; j++){
            printf("#");
        }
        printf("\n");
    }
}