#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n][4];

for( int i=0; i<n; i++ ){
    for( int j=0; j<4; j++ ){
        arr[i][j] = (i*4)+j;
    }
}

for( int i=0; i<n; i++){
    if( i%2 != 0 ){
        for( int j=4-1; j>=0; j-- ){
            printf("%d",arr[i][j]);
        }
    } else {
    for( int j=0; j<4; j++ ){
        printf("%d",arr[i][j]);
        }
    }
    printf("\n");
}


    return 0;
}