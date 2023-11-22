#include <stdio.h>
int len( char s[] ){
    int len = 0;
    while( s[len] != '\0' ){
        len += 1;
    }
    return len;
}
int main(){

char s[128];
scanf("%s",&s);
printf("%d",len(s));

    return 0;
}