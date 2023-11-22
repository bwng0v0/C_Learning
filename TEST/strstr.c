#include <stdio.h>
#include <string.h>

int main() {

    char str[1000];
    scanf("%[^\n]s", str);
    char find[100] = "is";
    char *result = strstr(str, find);
    if (result != NULL) {
        printf("문자열 안에서 '%s'를 찾았습니다. 위치: %ld\n",find, result - str);
    } else {
        printf("'%s'를 찾을 수 없습니다.\n",find);
    }

    return 0;
}
