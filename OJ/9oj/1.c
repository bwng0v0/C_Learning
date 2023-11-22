#include <stdio.h>
#include <string.h>
int main(){
//아니 scanf 공백 구분 입력 어케막지??

char s[10][128];
int i = 0;
while (1){
    scanf("%s",&s[i]);
    i += 1;
    if ( strcmp(s[i-1],"$END$") == 0 ){
        break;
    }
}

for (int j=0; j<i-1; j++){
    printf("%s\n",s[j]);
}

    return 0;
}