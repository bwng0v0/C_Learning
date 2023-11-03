#include <stdio.h>
int counter(){
    static int cnt=10; //여러번 돌려도 초기화는 한번만 하는구나
    // static -> 전역변수 화?
    cnt += 1;
    printf("총 호출: %d\n",cnt);
}

int main(){

counter();
counter();
counter();
counter();
counter();
counter();

    return 0;
}