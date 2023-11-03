#include <stdio.h>
int main(){

char mark;
int a,b;

scanf("%c",&mark);
scanf("%d",&a);
scanf("%d",&b);

if( mark == '+' )
printf("%d",a+b);
else if( mark =='-' )
printf("%d",a-b);
else if( mark =='*' )
printf("%d",a*b);
else if( mark =='/' )
printf("%d",a/b);
else if( mark =='%' )
printf("%d",a%b);

    return 0;
}