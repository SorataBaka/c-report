#include <stdio.h>
#include <string.h>
#define BUFFER_LEN 10
int main(){
    char s[BUFFER_LEN] = "Memek";
    
    printf("初期状態 %s\n", s);
    
    // s[0] = 'M';
    // s[1] = 'E';
    // s[2] = 'M';
    // s[3] = 'K';
    // s[4] = '\0';

    strcpy(s, "MEMK");

    printf("代入後 %s\n", s);


    // if(s == "MEMK") printf("BINGO\n");
    if(strcmp(s, "MEMK") == 0) printf("BINGO\n");

    return 0;



}