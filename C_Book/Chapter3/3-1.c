#include <stdio.h>
int main(){

int x;
printf("정수를 입력하세요 : ");
scanf("%d",&x);
if(x%10!=0)
printf("이 수는 10의 배수가 아닙니다.");

    return 0;
}