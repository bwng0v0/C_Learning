#include <stdio.h>
//왜 이게 정석이 아니지?????????
//블로그 ㄱㄱ
void p_swap( int *p1, int *p2 ){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
int main(){

int a = 3, b = 8;
int *p1 = &a, *p2 = &b;
p_swap(&p1,&p2);



printf("%d %d\n",*p1,*p2);

printf("%d %d\n",*p1,*p2);

    return 0;
}