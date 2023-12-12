#include <stdio.h>
#define BUF_SIZE 1024
int main(){

FILE *origin_fp;
FILE *target_fp;
char file_name_origin[256];
char file_name_target[256];
char buf[BUF_SIZE];
int n;

printf("원본 파일이름:"); scanf("%s",&file_name_origin);
printf("타겟 파일이름:"); scanf("%s",&file_name_target);

if ( (origin_fp = fopen(file_name_origin,"rb")) == NULL ){
    printf("실패 1");
}else{
    if ( (target_fp = fopen(file_name_target,"wb")) == NULL ){
        printf("실패 2");
    }else{

while(1){
    if (  ( n = fread(buf,1,BUF_SIZE,origin_fp)) != 0 )
    fwrite(buf,1,n,target_fp);
    if ( n < BUF_SIZE )
    break;
}

    }
fclose(target_fp);
}
fclose(origin_fp);

    return 0;
}