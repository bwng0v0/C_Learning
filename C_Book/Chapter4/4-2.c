#include <stdio.h>
int main(){

int A,B;
scanf("%d",&A);
scanf("%d",&B);

int range = A>B?A:B , total=0;
for( int i=1; i<=range; i++ ){
    if( A%i==0 && B%i==0 ){
    printf("%d ",i);
    total++;
    }
}
printf("\n공약수는 %d개",total);

    return 0;
}