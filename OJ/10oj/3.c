#include <stdio.h>
void ary_set(int *v, int n1, int n2, int val){

for (int i=n1; i<=n2; i++){
    v[i] = val;
}

for (int i=0; i<10; i++){
    printf("%d ",v[i]);
}

}
int main(){

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int n1,n2,val;
scanf("%d %d %d",&n1,&n2,&val);

ary_set(a,n1-1,n2-1,val); // -1해서 번째->인덱스로 변환

    return 0;
}