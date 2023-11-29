#include <stdio.h>
int is_null_str(char *s){
    return *s == '\0';
}
int main(){

char s[128];
scanf("%s",&s);
printf("%d",is_null_str(s));

    return 0;
}