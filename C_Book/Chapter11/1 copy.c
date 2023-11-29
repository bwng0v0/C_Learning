#include <stdio.h>
#include <string.h>
int main(){

for ( int i=0; i<10; i++ ){
        if ( i == 3 ){
        for ( int j=0; j<10; j++ ){
            if ( j == 6 )
            break;
            }
            printf("안쪽!");
        }
    }
    printf("바깥쪽!");


    return 0;
}