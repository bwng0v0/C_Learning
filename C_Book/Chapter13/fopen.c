#include <stdio.h>
int main(){

FILE *fp;

char file_name[256];


printf("파일 이름:");
scanf("%s",&file_name);

fp = fopen(file_name,"r");

if ( fp == NULL ){
    printf("존재하지 않는 파일입니다.\n");
}else{
    printf("있는거같은데요?\n");
    fclose(fp);
}

    return 0;
}