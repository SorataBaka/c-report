#include <stdio.h>
#define LOWER_LIMIT 18.5
#define UPPER_LIMIT 24.9

typedef struct  {
    double heightMeters;
    double weight;
    double calculatedBMI;
} Variables;

void underweight(Variables param);
void normal(Variables param);
void obese(Variables param);


int main(void)
{
	int	cm, kg;		// 身長[cm]，体重[kg] を入れるよ
	double	m, bmi;		// 身長[m]，BMI値 を入れるよ

	printf("BMIによるメタボ診断\n");
	while (1) {
		printf("----\n");
		printf("身長[cm] 体重[kg] > ");
		scanf("%d %d", &cm, &kg);	// 身長・体重の入力

		m = (double)cm/100;			// 身長の単位変換
		bmi = (double)kg/(m*m);			// BMIの計算]
        Variables params = {m, (double)kg, bmi};

		printf("BMI = %.1f\n", bmi);	// BMIの表示

        if(bmi < 18.5) underweight(params);
        else if(bmi < 25.0) normal(params);
        else obese(params);
	}
	return (0);
}
/**
 * 参照したように、一般的なコンセンサスは,
 * BMI 25 以上はすでに過体重とみなされ,
 * 健康な範囲は約 18.5 ～ 24.9 であるということです。
 * 
 * https://www.diabetes.ca/managing-my-diabetes/tools---resources/body-mass-index-(bmi)-calculator
*/
void underweight(Variables params){
    double normalWeight = LOWER_LIMIT * params.heightMeters * params.heightMeters;
    double weightToGain = normalWeight - params.weight;
    printf("結果　　　　　　　　　　 　：低体重（やせ型）\n");
    printf("%.1fCM の身長別の標準体重は　： %.1f KG\n", params.heightMeters * 100, normalWeight);
    printf("つまり %.1f KG 増量する必要があるということです。\n", weightToGain);
}
void normal(Variables params){
    double lowerWeightLimit = LOWER_LIMIT * params.heightMeters * params.heightMeters;
    double higherWeightLimit = UPPER_LIMIT * params.heightMeters * params.heightMeters;
    printf("結果　　　　　　　　　　 　：普通体重\n");
    printf("%.1fCM の身長に応じた、正常な体重の範囲は%.1f KG - %.1f KG\n", params.heightMeters * 100, lowerWeightLimit, higherWeightLimit);
    printf("体重を減らしたければ、%.1f　の体重をなくしてもいいです。\n", params.weight - lowerWeightLimit);
    printf("体重を増えたければ、%.1f　の体重を得てもいいです。\n", higherWeightLimit - params.weight);
}
void obese(Variables params){
    int obesityDegree = (int)((params.calculatedBMI - 25.0)/5.0) + 1;
    double normalWeight = UPPER_LIMIT * params.heightMeters * params.heightMeters;
    double weightToLose = params.weight - normalWeight;
    printf("結果　　　　　　　　　　 　：肥満（%d度）\n", obesityDegree >= 4 ? 4 : obesityDegree);
    printf("%.1fCM の身長別の標準体重は　： %.1f KG\n", params.heightMeters * 100, normalWeight);
    printf("つまり %.1f KG 痩せる必要があるということです\n", weightToLose);
    return;
}