#include <stdio.h>
int main(){
    double x, y, z;
    while(1){
        printf("実数２個 > ");
        scanf("%lf %lf", &x, &y);
        z = x / y;
        printf("%lf / %lf = %lf\n", x, y, z);
    }
    return 0;
}