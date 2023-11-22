#include <stdio.h>
int reverse( char s[] ){
    int i = 0;
    for ( i=0; s[i]; i++){
        i++;
    }
    for ( int j=i; j>=0; j-- ){
        printf("%c",s[j]);
    }
    return i;
}
int main(){

char s[128];
scanf("%s",&s);
reverse(s);

    return 0;
}