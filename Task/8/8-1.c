#include <stdio.h>
#define sqr(x) (x*x)
#define cube(x) (x*x*x)

int main(){

int x;
scanf("%d",&x);
printf("%d\n",sqr(x));
printf("%d",cube(x));

    return 0;
}