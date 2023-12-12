#include <stdio.h>
int main(){

FILE *fp;
char file_name[256];

printf("파일 이름:");
scanf("%s",&file_name);

fp = fopen(file_name,"w");


char name[100];
int height;
int weight;
if ( fp == NULL ){
    printf("존재하지 않는 파일입니다.\n");
}else{

    for ( int i=0; ; i++ ){
        int YESorNO;
        printf("%d 번째 데이터를 입력하시겠습니까?",i);

        scanf("%d",&YESorNO);
        if (YESorNO == 0)
        break;

        printf("이름:");  scanf("%s",&name);
        printf("키:");    scanf("%d",&height);
        printf("몸무게:"); scanf("%d",&weight);

        fprintf(fp,"%d %s %d %d\n",i, name, height, weight);
    }
    fclose(fp);

}

    return 0;
}