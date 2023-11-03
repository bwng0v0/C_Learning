#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
for( int i=0; i<n; i++ ){
    if( i%2 == 0 ){
    for( int j=0; j<4; j++ ){
        printf("%d",i*4+j);
        }
    } else {
        for( int j=4-1; j>=0; j-- ){
            printf("%d",i*4+j);
        }
    }
    printf("\n");
}

    return 0;
}