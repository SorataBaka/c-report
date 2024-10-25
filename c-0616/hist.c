#include <stdio.h>
#define SCORE_CLASS 11
#define MAX_SCORE 100
#define MIN_SCORE 0
int main(){
    int histoArray[SCORE_CLASS] = {};
    int amountOfStudents = 0, totalScore = 0;
    int maxScore = -1, minScore = -1;
    printf("成績を入力 [ -1 おしまい]: \n");
    while(1){
        int score;
        scanf("%d", &score);
        if(score < MIN_SCORE) break;
        if(score > MAX_SCORE){
            printf("エラー：不正な入力を無視しました．100以内な!!\n");
            continue;
        }
        histoArray[score/(SCORE_CLASS-1)]++;
        amountOfStudents++;
        totalScore += score;
        if(maxScore < 0 || score > maxScore) maxScore = score;
        if(minScore < 0 || score < minScore) minScore = score;
    }
    printf("階級:度数:グラフ\n");
    for(int i = SCORE_CLASS-1; i >= 0; i--){
        printf("%3d：%4d:", i * (SCORE_CLASS-1), histoArray[i]);
        for(int j = 0; j < histoArray[i]; j++) printf("*");
        printf("\n");
    }
    printf("学生数　＝　%d\n", amountOfStudents);
    printf("平均点　＝ %.2lf\n", (float)totalScore / amountOfStudents);
    printf("最高点　＝ %d\n", maxScore);
    printf("最低点　＝ %d\n", minScore);



}