#include <stdio.h>
int main(){
    int min = 0, max = 0;
    int input = 0;
    printf("得点　「おしまい　０」 > ");
    scanf("%d", &input);
    min = max = input;
    while(input != 0){
        if(input > max) max = input;
        if(input < min) min = input;
        printf("得点　「おしまい　０」 > ");
        scanf("%d", &input);
    }
    printf("最高点 > %d\n", max);
    printf("最低点 > %d\n", min);

}