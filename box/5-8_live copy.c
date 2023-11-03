#include <stdio.h>
int main(){

char arr[10][10];

for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        if( j%2 == 0 ){
        arr[i][j] = " ";
        }else printf("*");
    }
    printf("\n");
}

for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        printf("%d",arr[i][j]);
    }
    
}

    return 0;
}