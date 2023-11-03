#include <stdio.h>
#define n 3 //일단 홀수 n 대상임
int main(){
// 조건연산자 ? , :
int arr[n],tmp,middle;

for( int i=0; i<n; i++ ){
    scanf("%d",&arr[i]);
}

for( int j=0; j<n-1; j++ ){
for( int i=0; i<n-1; i++ ){
    if( arr[i]>arr[i+1] ){
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
    } 
}
}

int far=0;
int deviation[n];
middle = arr[(n-1)/2];

for( int i=0; i<n; i++ ){
    deviation[i] = arr[i] - middle;
    if( deviation[i]<0 )
    deviation[i] *= -1;
    if( far < deviation[i] )
    far = arr[i];
}

printf("%d",far);

/*
middle = arr[(n-1)/2]; // 짝수라면 n/2, 홀수라면 n-1/2
int far = arr[0];

//중간 위 탐색
for( int i=(n-1)/2; i<n; i++ ){
    if( (arr[i] - middle) > far ) // if 인덱스i-중앙 > 인덱스i-가장먼
    far = arr[i];
}
//중간 아래 탐색
for( int i=(n-1)/2; i>=0; i-- ){
    if( -1*(arr[i] - middle) >= -1*( middle - far) ) // if 인덱스i-중앙 > -(인덱스i-가장먼)  편차의 절대값이 더 크다면임
    far = arr[i];
}
*/

    return 0;
}