#include <stdio.h>
int getGCD(int a, int b){
    while (b>0){
    int tmp_a = a, tmp_b = b;
    a = tmp_b;
    b = tmp_a%tmp_b;
    printf("%d %d\n",a,b);
}
return a;
}

int main(){

int a,b;
scanf("%d %d",&a,&b);
printf("%d",getGCD(a,b));

    return 0;
}