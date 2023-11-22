#include <stdio.h>
void fix(int *n){
if ( *n < 0 ){
    *n = 0;
}
if ( *n > 100 ){
    *n = 100;
}
}
int main(){

int n;
scanf("%d",&n);
fix(&n);
printf("%d",n);

    return 0;
}