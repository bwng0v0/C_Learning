#include <stdio.h>

int facto(int n){
int res = 1;
for(int i=1; i<=n; i++){
    res *= i;
}

return res;
}

int combi(int n,int r){
return facto(n)/(facto(r)*facto(n-r));
}

int main(){

int n,r;
scanf("%dC%d",&n,&r);
printf("%d",combi(n,r));

    return 0;
}