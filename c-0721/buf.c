#include <stdio.h>
#include <string.h>
#define buflen 10
int main(){
    char buffer1[buflen] = "buf1";
    char buffer2[buflen] = "buf2";
    char buffer3[buflen] = "buf3";

    while(1){
        printf("buf2　(９文字以内)　＞　");
        // if(scanf("%s", buffer2) == EOF) break;
        if(scanf(" %s", buffer2) == EOF) break;


        printf("buf1: [%s]\n", buffer1);
        printf("buf2: [%s]\n", buffer2);
        printf("buf3: [%s]\n", buffer3);
        printf("\n"); 
    }

    printf("\n");
    return 0;



}