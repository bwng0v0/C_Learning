#include <stdio.h>
int print_array(int *arr){
    for( int i=0; i<5; i++)
    printf("%d ",arr[i]);
}

int main(){

int arr[5];
for( int i=0; i<5; i++){
    arr[i] = i;
}
print_array(arr);


    return 0;
}