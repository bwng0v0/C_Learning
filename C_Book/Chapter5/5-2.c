#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n];

for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
}

// 최소값과 최대값을 탐색후
// 최대값 - 최소값을 출력
int min = a[0], max = a[0];
for(int i=0; i<n; i++){
    if( min > a[i] ){ min = a[i]; }
    if( max < a[i] ){ max = a[i]; }
}

printf("%d",max-min);

    return 0;
}