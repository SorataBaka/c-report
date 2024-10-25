#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_NUM 75
#define WIDTH 5
int main(){
    srand(time(NULL));
    int validCheck[MAX_NUM] = {};
    int amount = WIDTH * WIDTH;

    while(amount > 0){
        int r = rand() % MAX_NUM;
        if(validCheck[r] > 0) continue;
        validCheck[r]++;
        amount--;
    }

    printf(" B   I   N   G   O\n");
    int makeshiftCount = 1;
    for(int i = 1; i <= MAX_NUM; i++){
        if(validCheck[i-1] < 1) continue;
        if(makeshiftCount % WIDTH == 0){
            printf("%2d\n", i);
            makeshiftCount = 0;
        }
        else printf("%2d  ", i);
        makeshiftCount++;
    }
    printf("\n");



}