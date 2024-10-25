#include <stdio.h>
#include <stdlib.h>
#define LEN 3
int main(){
    // char * a = (char *)malloc(sizeof(char) * LEN);
    // int * b = (int *)malloc(sizeof(int) * LEN);
    // double * c = (double *)malloc(sizeof(double) * LEN);
    char a[LEN];
    int b[LEN];
    double c[LEN];

    int i;

    printf("メモリアドレス |  変数名 |  変数値\n");
    printf("----------------------------------\n");

    printf("%p |  i      |  %d\n", &i, i);
    for(i = 0; i < LEN; i++){
        printf("%p |  b[%d]   |  %d\n", b + i, i, b[i]); 
    }
    for(i = 0; i < LEN; i++){
        printf("%p |  c[%d]   |  %lf\n", c + i, i, c[i]);
    }
    for(i = 0; i < LEN; i++){
        printf("%p |  a[%d]   |  %c\n", a + i, i, a[i]);
    }

    printf("----------------------------------\n");
    return 0;

}

// p234071@jns15:~/Documents/Source Codes/C Language/c-0926$ ./a.out
// メモリアドレス |  変数名 |  変数値
// ----------------------------------
// 0x7ffca05f3030 |  i      |  -1604341760
// 0x7ffca05f3034 |  b[0]   |  32764
// 0x7ffca05f3038 |  b[1]   |  16777216
// 0x7ffca05f303c |  b[2]   |  257
// 0x7ffca05f3040 |  c[0]   |  0.000000
// 0x7ffca05f3048 |  c[1]   |  0.000000
// 0x7ffca05f3050 |  c[2]   |  0.000000
// 0x7ffca05f3065 |  a[0]   |  
// 0x7ffca05f3066 |  a[1]   |  
// 0x7ffca05f3067 |  a[2]   |  
// ----------------------------------

// p234071@jns15:~/Documents/Source Codes/C Language/c-0926$ ./a.out | sort
// ----------------------------------
// ----------------------------------
// 0x7ffe3bb218e0 |  i      |  1002192896
// 0x7ffe3bb218e4 |  b[0]   |  32766
// 0x7ffe3bb218e8 |  b[1]   |  16777216
// 0x7ffe3bb218ec |  b[2]   |  257
// 0x7ffe3bb218f0 |  c[0]   |  0.000000
// 0x7ffe3bb218f8 |  c[1]   |  0.000000
// 0x7ffe3bb21900 |  c[2]   |  0.000000
// 0x7ffe3bb21915 |  a[0]   |  
// 0x7ffe3bb21916 |  a[1]   |  
// 0x7ffe3bb21917 |  a[2]   |  
// メモリアドレス |  変数名 |  変数値