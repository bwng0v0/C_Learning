#include <stdio.h>
int main(){

int n,sum=0;
scanf("%d",&n);

//10으로 나눈 나머지는 합계에 더하고 몫은 다시 반복문에 들어감
while ( n>0 ){
    sum += n%10;
    n = n/10;
}
printf("%d",sum);
    return 0;
}