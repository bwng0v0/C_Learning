#include <stdio.h>
void swap(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
void sort(int *v, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if ( v[j] < v[j+1] ){
                swap(&v[j],&v[j+1]);
            }
        }
    }

}
int main(){

int n=10;
int arr[10];
for ( int i=0; i<n; i++ ){
    scanf("%d",&arr[i]);
}

sort(arr,n);

for ( int i=0; i<n; i++ ){
    printf("%d ",arr[i]);
}

    return 0;
}