#include <stdio.h>
/*
s[3] :is a
s[4] :s[5] :a d d da
s[6] :s[7] :s[8] :s[9] :? ? ? ? ? 
s[10] :s[11] :s[12] :s[13] :s[14] :?  /? ? ? ?
s[15] :s[16] :s[17] :s[18] :s[19] :
scanf 공백도 문자열로 받으려면
sanf("%[^\n]s",&str);
*/
int main(){

char s[128][128];
int num = 0;
while (1){
    printf("s[%d] :",num);
    
    scanf("%s",&s[num]);
    num += 1;
    if ( s[num-1][0] == '.' ){
        break;
    }
}

for ( int i=0; i<num; i++ ){
    printf("s[%d] : \"%s\"\n",i,s[i]);
}

    return 0;
}