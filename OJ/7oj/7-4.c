#include <stdio.h>
#include <stdlib.h>
int main(){

double x1=0, d_up=0.00;
float x2=0, f_up=0.00; 
int n;
scanf("%d",&n);
for(int i=0; i<=n; i++){ //또 범위실수 ㅋㅋ
    x1 += d_up;
    x2 += f_up;
    d_up += 0.01;
    f_up += 0.01;
}

printf("%.15lf %.15f %.15lf",x1,x2,(x1-x2)<0?-(x1-x2):(x1-x2));

    return 0;
}