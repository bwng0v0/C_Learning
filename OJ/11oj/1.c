#include <stdio.h>
#include <string.h>

int main() {

char s[101];
scanf("%[^\n]s",s);

for ( int i=0; i<strlen(s); i++ ){
    if ( 'a' <= s[i] && s[i] <='z' ){
        s[i] = s[i]-32;
    }else if ( 'A' <= s[i] && s[i] <='Z' ){
        s[i] = s[i]+32;
    }
}

printf("%s",s);

    return 0;
}
