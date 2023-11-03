#include <stdio.h>
#include <limits.h>
int main(){

printf("int : %dbite\n",sizeof(int));
printf("float : %dbite\n",sizeof(float));
printf("double : %dbite\n",sizeof(double));
printf("long int : %dbite\n",sizeof(long int));
printf("short : %dbite\n",sizeof(short int));

int x = 100;
int left_shift_x = x << 3;  //    x<<3 == x/2^3
int right_shift_x = x >> 3; //    x>>3 == x*2^3
printf("%d , %d\n",left_shift_x,right_shift_x);
left_shift_x = x << 2;
right_shift_x = x >> 2;
printf("%d , %d",left_shift_x,right_shift_x);



    return 0;
}