#include <stdio.h>
#include <math.h>

#define PI 3.1415926
#define GRAPH_SIZE 4
#define MAX_ANGLE 360
#define ANGLE_STEP 45


double piToRad(double angle){
    return (angle / 180)*PI;
}
double normalize(double y){
    return (y > 1 ? ceil(y) : y < -1 ? floor(y) : 0) + 5;
}

void plot(double y){
    for(int i = 0; i < y; i++){
        printf("  ");
    }
    printf("*\n");
}


int main(){
    printf("サイン関数グラフ\n");
    for(int i = 0; i <= MAX_ANGLE; i += ANGLE_STEP){
        double y = GRAPH_SIZE * sin(piToRad((double) i));
        plot(normalize(y));
    }
    printf("コサイン関数グラフ\n");
    for(int i = 0; i <= MAX_ANGLE; i += ANGLE_STEP){
        double y = GRAPH_SIZE * cos(piToRad((double) i));
        plot(normalize(y));
    }
    return 0;
}