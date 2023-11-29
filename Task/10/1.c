#include <stdio.h>
void div( int a, int b, int *quot, int *rem ){
    *quot = a/b;
    *rem = a%b;
}
int main(){

int *quot, *rem;
div( 9, 3, quot, rem );
printf("%d %d",*quot, *rem);

    return 0;
}