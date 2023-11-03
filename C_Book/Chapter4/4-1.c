#include <stdio.h>
int main(){

int n;
for(;;){
printf("10보다 크고 100보다 작은 정수를 입력하세요: ");
scanf("%d",&n);
if( 10<n && n<100 )
break;
}

for( int i=3; i<=n; i+=3 ){
printf("%d ",i);
}

    return 0;
}