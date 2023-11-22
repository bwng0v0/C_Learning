#include <stdio.h>
void swap(int *a,int*b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort3(int *n1, int *n2, int *n3){
    if(*n1 < *n2) swap(n1,n2);
    if(*n2 < *n3) swap(n2,n3);
    if(*n1 < *n2) swap(n1,n2);
}
int main(){

int a,b,c;
scanf("%d %d %d",&a,&b,&c);
sort3(&a,&b,&c);
printf("%d %d %d",a,b,c);
    return 0;
}