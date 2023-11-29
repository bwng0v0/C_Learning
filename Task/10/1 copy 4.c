#include <stdio.h>

int main(){

int a = 1, b = 4;
int *p1 = &a, *p2 = &b;


printf("%d %d\n",*p1,*p2);
int *pt;

pt = p1;
p1 = p2;
p2 = pt;

printf("%d %d\n",*p1,*p2);

   return 0;
}