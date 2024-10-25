#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL) + rand());
    int randomBulletPosition = rand() % 7;
    // randomBulletPosition = 6;
    // printf("DEBUG %d\n", randomBulletPosition);
    int input;
    while(1){
        printf("弾倉を回す？\n");
		printf("1以上：回して撃つ，0：そのまま撃つ，-1以下：パス > ");
		scanf("%d", &input);
        if(input >= 1){
            randomBulletPosition = rand() % 7;
            if(randomBulletPosition < 1) break;
        }
        if(input == 0 && --randomBulletPosition < 1) break;
        if(input < 0) randomBulletPosition--;
    }
    puts("バーン！！！");
    puts("終了");
}