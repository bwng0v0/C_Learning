#include <stdio.h>

//정수 x안에 세트된 비트 수 반환
int count_bits(unsigned x){ // 매개변수는 언사인드 최대값
    int bits = 0;
    while (x){
        if(x&1U)
        bits++;
        x>>=1; // x = x>>1
    }
    return bits;
}
//언사인드형의 비트수 반환
// unsigned의 비트가 모두 1로 세트된 값 반환
int int_bits(void){
    return count_bits(~0U);
}

//언사인드형 비트 내용 출력
void print_bits(unsigned x){
    int i;
    for(i = int_bits()-1; i>=0; i-- ){ // 시작: int
        putchar( ((x>>i)&1U)?'1':'0' ); //왜 프린트 f는 안되냐?
    }
}
int main(){

unsigned x;
printf("음이 아닌 정수: ");
scanf("%u",&x);
printf("이 정수의 내용은 ");
print_bits(x);

    return 0;
}