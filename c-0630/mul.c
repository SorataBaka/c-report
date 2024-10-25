#include <stdio.h>


int mul(int x, int y){
    if(y == 0) return 0;
    return x + mul(x , y - 1);
}

int main(){
    int x, y;
    printf("非負整数 x, y > ");
    scanf("%d %d", &x, &y);

    int z = mul(x, y);

	printf("%d * %d = %d\n", x, y, z);


}