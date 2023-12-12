#include <stdio.h>
typedef struct{
    int x;
    int y;
    int fuel;
}car;
int main(){

int x = 5;
int y = 10;
int fuel = 30;

car c1 = {x,y,fuel};
car *p = &c1;

p->x = 17;

printf("%d %d %d",c1.x, c1.y, c1.fuel);

//초기화에 변수도 쓸수있음
//int arr[10] = {1,2,3,4,5,a,scanf("%d",&a),a};
//scanf 반환타입이 스태틱 인라인 인트
//for (int i=0; i<10; i++)
//printf("%d ",arr[i]);
    return 0;
}