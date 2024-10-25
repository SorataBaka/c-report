#include <stdio.h>
void bar(int n) {
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}
int main(void)
{
	int	a = 10;
	int	b = 20;
	int	c = 15;
    bar(a); bar(b); bar(c);
	return (0);
}