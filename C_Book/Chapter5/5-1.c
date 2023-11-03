#include <stdio.h>
int main(){

// 배열의 크기n을 입력받고 배열의 요소를 입력받음
int n;
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
}

// 1차원 배열의 모든 요소를 출력
for(int i=0; i<n; i++){
    printf("a[%d] = %d\n",i,a[i]);
}

    return 0;
}