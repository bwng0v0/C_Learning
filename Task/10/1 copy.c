#include <stdio.h>
void sum_diff( int a, int b, int *sum, int *diff ){
    *sum = a+b;
    *diff = a>b?a-b:b-a;
}
int main(){

int *sum, *diff;
sum_diff( 13, 5, sum, diff );
printf("%d %d",*sum, *diff);

    return 0;
}