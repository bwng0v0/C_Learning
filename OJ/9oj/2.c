#include <stdio.h>
#include <string.h>
int main(){

char s[128];
scanf("%[^!\n]s",&s);
printf("%s",s);
for (int i=strlen(s)-1; i>=0; i--){
    printf("%c",s[i]);
}

    return 0;
}