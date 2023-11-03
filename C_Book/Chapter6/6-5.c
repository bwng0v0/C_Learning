#include <stdio.h>
void copy_arr(int a[],int b[],int n){
    for(int i = 0; i<n; i++){
        b[i] = a[i];
    }
}
int main(){

int arr[10];
for(int i=0; i<10; i++){
    arr[i] = i+1;
}

int copy[10];
copy_arr(arr,copy,10);

for(int i=0; i<10; i++){
    printf("%d ",copy[i]);
}

    return 0;
}