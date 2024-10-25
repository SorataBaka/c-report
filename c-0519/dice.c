#include <stdio.h>		// printf(), getchar() に必要
#include <stdlib.h>		// rand() に必要
#include <time.h>

int main(void)
{
    int dice1, dice2;
	while (1) {
        srand(time(NULL));
        int dice1 = (rand() % 6) + 1;
        int dice2 = (rand() % 6) + 1;

        if((dice1 + dice2) % 2 == 0) printf("%d %d　の　丁", dice1, dice2);
        else printf("%d %d　の　半", dice1, dice2);
        getchar();
	}
	return (0);
}
