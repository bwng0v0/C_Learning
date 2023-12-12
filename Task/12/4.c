#include <stdio.h>
typedef struct xyz{
    int x;
    int y;
    float z;
}xyz;
int main(){

xyz s1;

xyz *p = &s1;
p->x = 1;
p->y = 2;
p->z = 3.14;

printf("%d %d %.2f",s1.x, s1.y, s1.z);

    return 0;
}