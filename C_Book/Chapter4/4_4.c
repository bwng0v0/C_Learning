#include <stdio.h>
int main(){

int n;
scanf("%d",&n);

//+와 -를 n번 번갈아가며 출력
for( int i=1; i<=n; i++ ){
    if(i%2==0){
        printf("-");
    }else{
        printf("+");
    }
}

    return 0;
}