#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int area = n*2;

for( int i=1; i<=(area/i); i++ ){
    if( area%i==0 ){
        printf("%d x %d\n", i,area/i);
    }
}

    return 0;
}