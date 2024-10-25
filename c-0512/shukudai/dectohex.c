#include <stdio.h>
int main(){
    int input;
    while(1){
        printf("１０進数　＞　");
        scanf("%d", &input);
        printf("１６進数　＞　%x\n", input);
    }
    return 0;
}