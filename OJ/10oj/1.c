#include <stdio.h>
char grade(int *score){
    if ( *score <= 59 ){
        return 'F';
    }else if ( *score <= 69 ){
        return 'D';
    } else if ( *score <= 79 ){
        return 'C';
    } else if ( *score <= 89 ){
        return 'B';
    } else {
        return 'A';
    }
}
int main(){

int x;
scanf("%d",&x);
printf("%c",grade(&x));

    return 0;
}