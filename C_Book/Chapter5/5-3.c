#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n];

for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
}

//배열의 총합을 구해서
//10 + 20 + 30 = 60 형태로 출력함
int sum = 0;
for( int i=0; i<n-1; i++ ){
    sum += a[i];
    printf("%d + ",a[i]);
}
printf("%d",a[n-1]);
sum += a[n-1];

printf(" = %d",sum);

    return 0;
}