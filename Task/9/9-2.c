#include <stdio.h>
void null_str( char s[] ){
    s[0] = '\0';
}
int main(){

char s[128];
scanf("%s",&s);
null_str(s);
printf("%s",s);

    return 0;
}