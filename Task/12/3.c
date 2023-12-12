#include <stdio.h>
typedef struct xyz{
    int x;
    int y;
    float z;
}xyz;
int main(){

xyz s1;
s1.x = 1;
s1.y = 2;
s1.z = 3.14;

printf("%d %d %.2f",s1.x, s1.y, s1.z);

    return 0;
}