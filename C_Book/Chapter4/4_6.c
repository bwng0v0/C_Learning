#include <stdio.h>
int main(){

int n,sum=1;
scanf("%d",&n);
// 결과값*i , i증감을 반복하며 n factorial값을 계산함
for( int i=1; i<=n; i++ ){
    sum *= i;
}

printf("%d",sum);

    return 0;
}