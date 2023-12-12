#include <stdio.h>
typedef struct xyz{
    int x;
    int y;
    int z;
}xyz;
int xyzeq(xyz *p1 , xyz *p2){
    if(p1->x != p2->x)return 0;
    if(p1->y != p2->y)return 0;
    if(p1->z != p2->z)return 0;
    return 1;
}
int main(){

xyz s1 = {1,2,3};
xyz s2 = {5,6,7};

xyz *p1 = &s1, *p2 = &s2;

printf("%d\n",xyzeq(p1,p2));
s2 = s1;
printf("%d\n",xyzeq(p1,p2));

    return 0;
}