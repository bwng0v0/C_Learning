#include <stdio.h>
typedef struct str{
    char str[10];
}str;
typedef struct strarr{
str strarr[5];
} strarr;
int main(){

str s = {"hello"};
strarr sa[3] = {"my","name","is","tony"};
printf("%s %s %s %s",sa[0].strarr[0], sa[0].strarr[1], sa[0].strarr[2], sa[0].strarr[3]);

    return 0;
}