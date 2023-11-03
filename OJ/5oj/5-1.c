#include <stdio.h>
#define n 3
int main(){

int mx[n][n];
int my[n][n];

for( int i=0; i<n; i++ ){
    for( int j=0; j<n; j++ ){
        scanf("%d",&mx[i][j]);
    }
}
for( int i=0; i<n; i++ ){
    for( int j=0; j<n; j++ ){
        scanf("%d",&my[i][j]);
    }
}

for( int i=0; i<n; i++ ){
    for( int j=0; j<n; j++ ){
        printf("%d",mx[i][j]-my[i][j]);
    }
    printf("\n");
}


    return 0;
}