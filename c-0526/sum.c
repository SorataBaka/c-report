#include <stdio.h>
int main(){
   // 2 methods.... 
   // 1st, manual way
   int input;
   printf("非負整数 n > ");
   scanf("%d", &input);
   int total = 0;
   for(int i = 1; i <= input; i++) total += i;
   printf("総和 Sn = %d\n", total);

   // 2nd, basic mathematics
//    int input;
//    printf("非負整数 n > ");
//    scanf("%d", &input);
//    printf("総和 Sn = %d\n", (input * (1 + input))/2);
}