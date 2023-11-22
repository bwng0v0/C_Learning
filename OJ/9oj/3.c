#include <stdio.h>
#include <string.h>
int main(){

char s[128];
scanf("%[^!\n]s",&s);
for (int i=0; i<strlen(s); i++){
    if ( s[i] == ' ' ){
        continue;
    }else{
        printf("%c",s[i]);
    }
}

    return 0;
}