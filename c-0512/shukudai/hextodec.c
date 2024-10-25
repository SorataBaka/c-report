#include <stdio.h>
int main(){
    int input;
    while(1){
        printf("１６進数　＞　");
        scanf("%x", &input);
        printf("１０進数　＞　%d\n", input);
    }
    return 0;
}