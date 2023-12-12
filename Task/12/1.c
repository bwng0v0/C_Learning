#include <stdio.h>
typedef struct xyz{
    int x;
    int y;
    int z;
}xyz;
void set0(xyz *p){
    p->x = 0;
    p->y = 0;
    p->z = 0;
}
int main(){

xyz s1 = {1,2,3};
xyz *p = &s1;
set0(p);
printf("%d %d %d",s1.x,s1.y,s1.z);

    return 0;
}