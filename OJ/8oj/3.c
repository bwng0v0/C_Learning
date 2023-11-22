#include <stdio.h>
int main(){

char ch;
int upper = 0,lower = 0;
while( (ch = getchar()) != '\n') {
   if ( 65<=(int)ch && (int)ch<=90 ){
    upper += 1;
   }else if ( 97<=(int)ch && (int)ch<=122 ){
    lower += 1;
   }
}
printf("대문자");
for (int i=0; i<upper; i++){
    printf("*");
}
printf("\n");

printf("소문자");
for (int i=0; i<lower; i++){
    printf("*");
}

    return 0;
}