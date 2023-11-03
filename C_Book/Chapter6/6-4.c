#include <stdio.h>
int diff(int a,int b){
    return a>b ? a-b : b-a;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",diff(a,b));

    return 0;
}