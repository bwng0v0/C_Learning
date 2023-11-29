#include <stdio.h>
#include <string.h>
//위치가 이상함
int find_str( char s[], char target[] ){
    int s_len = strlen(s);
    int target_len = strlen(target);
    int is_right = 1;

    for ( int i=0; i<s_len; i++ ){
        if (s[i] == target[0]){//첫글자를 찾았다면

            is_right = 1;
        for ( int j=0; j<target_len; j++ ){//근데 찾는게 아니라면
            if ( s[i+j] != target[j]){
            is_right = 0;
            break;
            }
        }
            if ( is_right == 1 )//맞다면 리턴
            return i;
        }
    }
    return -1;

}
int main(){
//메모리 그리면서
//strstr구현 (문자열탐색)
char s[128];
char target[128];

scanf("%[^\n]s",&s);
char ch = getchar();
scanf("%s",&target);

int find = find_str(s,target);
if ( find >= 0){
    printf("찾았다! 시작 인덱스는 %d",find); //위치는 인덱스 기준
}else{
    printf("안보여요");
}

    return 0;
}