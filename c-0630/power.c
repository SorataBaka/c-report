#include <stdio.h>

int power(int x, int pow){
    if(pow == 0) return 1;
    return x * power(x, pow - 1);
}


int main(){

    int x, y;
    // 入力部
	printf("x, y > ");
	scanf("%d %d", &x, &y);
    int z = power(x, y);
	printf("%d^%d = %d\n", x, y, z);

}