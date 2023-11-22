#include <stdio.h>
void str_copy( char s1[], char s2[] ){
    int i =0;
    for ( i=0; i<s2[i]; i++ ){
        s1[i] = s2[i];
    }
    s1[i+1] = '\0';
}
int main(){

char s1[128];
char s2[128];
scanf("%s",&s2);
str_copy( s1,s2 );
printf("%s",s1);
    return 0;
}