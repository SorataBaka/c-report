#include <stdio.h>
int main(){
   int total = 0;
   int input = 0;
   int dataCount = 0;
   while(1){
      printf("%d 番目の非負整数（-1 で終了）> ", input);
      scanf("%d", &input);
      if(input < 0) break;
      if(input > 100) {
         printf("エラー：範囲外の値\n");
         printf("続けますか？（0：終了／その他：続行）> ");
         scanf("%d", &input);
         if (input == 0) break;		// break の着地点へ
         else continue;	
      }
      total += input;
      dataCount++;
   }
   double average = (double)total / (double)dataCount;
   printf("平均 = %.2f\n", average);
}