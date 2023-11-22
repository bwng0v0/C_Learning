#include <stdio.h>
#define swap(x,y) do{int tmp=x; x=y; y=tmp;} while(0)
int main(){

int x,y;
scanf("%d %d",&x,&y);
swap(x,y);
printf("%d %d",x,y);

    return 0;
}