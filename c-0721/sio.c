#include <stdio.h>

#define BUFFER_LEN 10

int main(){
    char string[BUFFER_LEN];
    while(1){
        if(scanf(" %s", string) == EOF) break;
        printf("[%s]\n", string);
    }
    return 0;
}