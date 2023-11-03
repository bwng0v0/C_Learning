#include <stdio.h>
int main(){

int n;

//조건을 만족하는 인풋을 받을때까지 반복
while (1) {
    printf("1~100\n");
    scanf("%d",&n);
    if( 1<=n && n<=100 ){
        break;
    }
}

    return 0;
}