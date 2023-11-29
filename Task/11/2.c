#include <stdio.h>
int len(const char *s){
    int len = 0;
    while ( s[len] ){
        len++;
    }
    return len;
    
}
int main(){

char s[128];
scanf("%s",&s);
printf("%d",len(s));

    return 0;
}