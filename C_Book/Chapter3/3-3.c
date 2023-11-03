#include <stdio.h>
int main(){

int x;
printf("정수를 입력해주세요 : ");
scanf("%d",&x);

if( x>0 )
printf("이 수는 양수입니다.");
else if( x==0 )
printf("이 수는 0입니다.");
else printf("이 수는 음수입니다.");

    return 0;
}