#include <stdio.h>
#include <string.h>


#define BUFFER_LEN 256
#define BUFFMT " %255s"

void save(char * filename, int * totalPointer);
void sum(char *filename, int * totalPointer);
void reset(int * totalPointer);
void show(int * totalPointer);
void help();

int main(){
    char * format = BUFFMT;
    char commandName[BUFFER_LEN];
    char arguments[BUFFER_LEN];

    int total = 0;

    while(1){
        printf("命令　＞　");
        if(scanf(format, commandName) == EOF) break;
        

        //Begin matching commandNames
        if(strcmp(commandName, "exit") == 0) {
            break;
        } else if(strcmp(commandName, "help") == 0) {
            help();
        } else if(strcmp(commandName, "sum") == 0) {
            scanf(format, arguments);
            sum(arguments, &total);
        } else if(strcmp(commandName, "show") == 0) {
            show(&total);
        } else if(strcmp(commandName, "reset") == 0) {
            reset(&total);
        } else if(strcmp(commandName, "save") == 0) {
            scanf(format, arguments);
            save(arguments, &total);
        } else {
		    printf("エラー：不明なコマンド：%s\n", commandName);
        }
        printf("%s 命令終了\n", commandName);
    }

	printf("終了．\n\n");
    return 0;
}
void sum(char * filename, int * totalPointer){
    int total = 0;
    int temp;
    FILE * filePointer = fopen(filename, "r");
    if(filePointer == NULL){
        perror("オープン失敗\n");
        return;
    }
    while(fscanf(filePointer, "%d\n", &temp) != EOF) total += temp;
    printf("小計：%d\n", total);
	fclose(filePointer);
    *totalPointer = *totalPointer + total;
}
void show(int * totalPointer){
	printf("合計：%d\n", *totalPointer);
}
void reset(int * totalPointer){
    *totalPointer = 0;
}
void save(char * filename, int * totalPointer){
    FILE * filePointer = fopen(filename, "w");
    fprintf(filePointer, "合計　＞　%d", *totalPointer);
    fclose(filePointer);
}
void help(){
    putchar('\n');
    puts("1. sum ファイル名");
    puts("2. show");
    puts("3. reset");
    puts("4. help");
    puts("5. exit");
}