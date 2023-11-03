#include <stdio.h>
#define n 3
int main(){

int arr[n],tmp;

for( int i=0; i<n; i++ ){
    scanf("%d",&arr[i]);
}

for( int j=0; j<n-1; j++ ){
for( int i=0; i<n-1; i++ ){
    if( arr[i]<arr[i+1] ){
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
    } 
}
}

for( int i=0; i<n; i++ ){
    printf("%d ",arr[i]);
}

    return 0;
}