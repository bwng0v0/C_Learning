#include <stdio.h>
void bit_print(short x){
    int bits = sizeof(x) * 8;
    for( int i=0; i<bits; i++ ){
        int bit = (x>>i) & 1;
        printf("%d",bit);
    }
}
int main(){

short x;
scanf("%hd",&x);
bit_print(x);

    return 0;
}