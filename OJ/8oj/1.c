#include <stdio.h>
void A(int n){

if (n>0){
    for ( int i=0; i<n; i++){
    printf("%c",'A');
    }
    printf("\n");
    A(n-1);
}else{
    for ( int i=0; i<n; i++){
    printf("%c",'A');
    }
}

}
int main(){

int n;
scanf("%d",&n);
A(n);

    return 0;
}