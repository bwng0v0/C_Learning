#include <stdio.h>
typedef struct arr{
int arr[100];
} list;
int main(){

list l1;
list l2;

for (int i=0; i<100; i++){
    l1.arr[i] = i+1;
}


l2 = l1;
l1.arr[0] = 999;
l2.arr[0] = 111;
//파이썬 리스트대입처럼 포인터가 되는건 아님

printf("%d ",l1.arr[0]);
printf("%d ",l2.arr[0]);

    return 0;
}