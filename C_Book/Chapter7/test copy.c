#include <stdio.h>

void bit_print(unsigned short x){
int bits = sizeof(x) * 8; //바이트 * 8 = 비트수

for( int i=bits-1; i>=0; i--  ){
    int bit = (x>>i) & 1;
    printf("%d",bit);
}
}

void mbit_print(unsigned short x){
int bits = sizeof(x) * 8; //바이트 * 8 = 비트수
printf("1");
for( int i=bits-2; i>=0; i--  ){
    int bit = (x>>i) & 1;
    printf("%d",bit);
}
}
int main(){

int x;
scanf("%d",&x);

if(x>0){
    bit_print(x);
}else{
    mbit_print(-x);
}

    return 0;
}