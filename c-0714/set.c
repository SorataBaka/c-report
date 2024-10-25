#include <stdio.h>
#define ARRAY_SIZE 10
int set(int * numArray, int arraySize, int index, int value){
    if(index < 0 || index >= arraySize) return 1;
    numArray[index] = value;
}
int main(){
    int a[ARRAY_SIZE];
    int n = 0;
    n += set(a, ARRAY_SIZE, -100, 1);
	// printf("-100: OK\n");	// 動作継続の確認
    n += set(a, ARRAY_SIZE, 1000, 1);
	// printf("10000: OK\n");	// 動作継続の確認
    
	printf("オーバラン防止回数：%d\n", n);
	return (0);
}

