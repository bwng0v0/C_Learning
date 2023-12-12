#include <stdio.h>
int main(){

FILE *fp;
char file_name[256];


int cnt;
int ch;

printf("파일 이름:"); scanf("%s",&file_name);

fp = fopen(file_name,"r");

if ( fp == NULL ){
    printf("파일을 찾지 못했습니다.\n");
}else{
    while( (ch = fgetc(fp)) != EOF ){
        if ( ch == '\n' ){
        cnt += 1;
        }
    }
    fclose(fp);

    printf("%s파일은 %d줄 입니다.\n",file_name, cnt+1);
}

    return 0;
}