#include <stdio.h>
#include <ctype.h>
int main(){

//캐피탈라이즈/타이틀 나오겠는데
char str[128];
/*
scanf("%[^\n]s",&str);
printf("%c\n",toupper(str[0]));
printf("%c\n",tolower(str[0]));
printf("%s",str);
*/

/*
char ch;
for ( int i=0; i<10; i++ ){
    ch = getchar();
    printf("%c",toupper(ch));
}
*/
scanf("%s",str);
if ( str == "hello" ){
    printf("yes");
}else{
    printf("no");
}
    return 0;
}