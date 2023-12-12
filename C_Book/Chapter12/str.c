#include <stdio.h>
typedef struct str{
    char s[128];
}str;
int main(){

// #구조체 선언하면서 특정멤버만 초기화할수는없음
// #중괄호로만 초기화 가능한듯
str str1 = {"hello"};
char s[128] = "hello";

printf("%s\n",str1.s);
printf("%s\n",s);

    return 0;
}