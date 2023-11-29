#include <stdio.h>
void setarr( int arr[], int size){

for ( int i=0; i<size; i++ ){
    arr[i] = 0;
}

}
int main(){

int size = 10;
int arr[size];
for ( int i=0; i<size; i++ ){
    printf("%d ",arr[i]);
}
printf("\n");

setarr(arr, size);
for ( int i=0; i<size; i++ ){
    printf("%d ",arr[i]);
}
    return 0;
}