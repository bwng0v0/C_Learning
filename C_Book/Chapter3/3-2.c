#include <stdio.h>
int main(){

int A,B;
printf("2개의 정수를 입력하세요.\n");
printf("정수 A : "); scanf("%d",&A);
printf("정수 B : "); scanf("%d",&B);
if( A%B )  //이 조건식이 된다고? 아 0 == False , others == True
printf("B는 A의 약수가 아닙니다.");
else
printf("B는 A의 약수 입니다.");

    return 0;
}