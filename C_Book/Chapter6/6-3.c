#include <stdio.h>
int power(int x,int n){
    int res = x;
    for(int i=0; i<n-1; i++){
        res *= x;
    }
    return res;
}
int main(){
int n,x;
scanf("%d %d",&x,&n);
printf("%d",power(x,n));

    return 0;
}