#include <stdio.h>
int main(){

int n,tmp;
scanf("%d",&n);
int arr[n*5];

for( int i=0; i<n*5; i++ ){
    scanf("%d",&arr[i]);
}

for( int i=0; i<n*5-1; i++ ){
    for( int j=0; j<n*5-1; j++ ){
        if( arr[j] < arr[j+1] ){
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
        }
    }
}

for( int i=0; i<n*5; i++ ){
    printf("%d ",arr[i]);
}

    return 0;
}