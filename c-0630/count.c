#include <stdio.h>

void countup(int n){
    if(n < 1) return;
    countup(n - 1);
    printf("%d\n", n);
}
void countdown(int n){
    if(n < 1)return;
    printf("%d\n", n);
    countdown(n - 1);
}

int main(void){
	int	n;

	printf("自然数 n > ");
	scanf("%d", &n);

	printf("カウントアップ：\n");
	countup(n);

	printf("カウントダウン：\n");
	countdown(n);

	return (0);
}