#include <stdio.h>
typedef struct xy{
    int x;
    int y;
}xy;
int quadrant(xy p){

if( p.y > 0 ){
    if( p.x >0 )
    return 1;
    else
    return 2;
}else{
    if( p.x >0 )
    return 4;
    else
    return 3;
}

}
int main(){

xy xy1;
scanf("%d %d",&xy1.x, &xy1.y);

printf("사분면=%d",quadrant(xy1));


    return 0;
}