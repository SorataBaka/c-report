#include <stdio.h>
#include <stdlib.h>
#define	NUM	5

void print(int * array, int arraySize);
void reset(int * array, int arraySize, int setValue);
int check(int * array, int arraySize, int * positiveTotalPointer, int * negativeTotalPointer);
void input(int * array, int arraySize);
void copy(int * fromArray, int * toArray, int arraySize);

// Extras
int min(int * array, int arraySize);
int max(int * array, int arraySize);
float average(int * array, int arraySize);
void reverse(int * array, int arraySize);
void sort(int * array, int arraySize);


int main(void){
    // int a = (int *)malloc(sizeof(int) * NUM); これもできる
	int     a[NUM];
	int     b[NUM];
	int	nz, np, nm;

    // ゴミを表示される
    printf("\nゴミを表示される\n");
	print(a, NUM);		// ゴミが表示される
	nz = check(a, NUM, &np, &nm);	// 符号をカウント
	printf("ゼロ｜正｜負：%d｜%d｜%d 個\n\n", nz, np, nm);

    // 全配列を７に設定される
    printf("\n全配列を７に設定される\n");
	reset(a, NUM, 7);	// a の全要素を 7 にする
	print(a, NUM);		// 7 7 7 ... が表示される
	nz = check(a, NUM, &np, &nm);	// 符号をカウント
	printf("ゼロ｜正｜負：%d｜%d｜%d 個\n\n", nz, np, nm);


    //　配列Aに入力される
    printf("\nA配列に入力する\n");
	input(a, NUM);		// てきとーなデータを a にキーボード入力すると...
	print(a, NUM);		// そいつらが表示される
    nz = check(a, NUM, &np, &nm);
	printf("ゼロ｜正｜負：%d｜%d｜%d 個\n\n", nz, np, nm);

    // 配列Aから配列Bにコピされる
    printf("\nB配列\n");
	copy(a, b, NUM);	// a の全要素を b にコピーする
	print(b, NUM);		// b として，a と同じ内容が表示される
    nz = check(b, NUM, &np, &nm);
	printf("ゼロ｜正｜負：%d｜%d｜%d 個\n\n", nz, np, nm);


    printf("A配列から最大の値は %d\n", max(a, NUM));
    printf("A配列から最小の値は %d\n", min(a, NUM));
    printf("A配列の値の平均点は %.2f\n\n", average(a, NUM));


    printf("\nA配列を逆転する\n");
    reverse(a, NUM);
    print(a, NUM);


    printf("\nA配列をソートする\n");
    sort(a, NUM);
    print(a, NUM);

	return (0);
}

void print(int * array, int arraySize){
    for(int i = 0; i < arraySize; i++){
        printf("配列[%d] = %d\n", i, array[i]);
    }
    return;
}
void reset(int * array, int arraySize, int setValue){
    for(int i = 0; i < arraySize; i++){
        array[i] = setValue;
    }
}
int check(int * array, int arraySize, int * positiveTotalPointer, int * negativeTotalPointer){
    int totalZero = 0;
    *negativeTotalPointer = 0;
    *positiveTotalPointer = 0; // 数をリセットする。

    for(int i = 0; i < arraySize; i++){
        int value = array[i];
        if(value < 0) *negativeTotalPointer = *negativeTotalPointer + 1;
        if(value == 0) totalZero++;
        if(value > 0) *positiveTotalPointer = *positiveTotalPointer + 1;
    }
    return totalZero;
}
void input(int * array, int arraySize){
    for(int i = 0; i < arraySize; i++){
        printf("配列[%d] = ", i);
        scanf("%d", array + i);
        // &array[i] もできる
    }
}
void copy(int * fromArray, int * toArray, int arraySize){
    for(int i = 0; i < arraySize; i++){
        toArray[i] = fromArray[i];
    }
}

int min(int * array, int arraySize){
    int beginningNumber = array[0];
    for(int i = 1; i < arraySize; i++){
        if(array[i] < beginningNumber) beginningNumber = array[i];
    }
    return beginningNumber;
}

int max(int * array, int arraySize){
    int beginningNumber = array[0];
    for(int i = 1; i < arraySize; i++){
        if(array[i] > beginningNumber) beginningNumber = array[i];
    }
    return beginningNumber;
}
float average(int * array, int arraySize){
    float total = 0;
    for(int i = 0; i < arraySize; i++) total += array[i];
    return total/arraySize;
}
void reverse(int * array, int arraySize){
    for(int i = 0; i < arraySize/2; i++){
        int endIndex = arraySize - 1 - i;
        int placeholder = array[endIndex];
        array[endIndex] = array[i];
        array[i] = placeholder;
    }
}
void sort(int * array, int arraySize){
    // Bubble Sort
    for(int i = 0; i < arraySize - 1; i++){
        for(int j = i + 1; j < arraySize; j++){
            if(array[i] > array[j]){
                int placeholder = array[j];
                array[j] = array[i];
                array[i] = placeholder;
            }
        }
    }
}