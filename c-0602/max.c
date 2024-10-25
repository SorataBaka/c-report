#include <stdio.h>
int main(){
    int max = 0;
    int input = 0;
    while(1){
        printf("得点　「おしまい　０」 > ");
        scanf("%d", &input);
        if(input < 0)break;
        if(input > max) max = input;
    }
    printf("最高点 > %d\n", max);
}