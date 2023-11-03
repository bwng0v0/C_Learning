#include <stdio.h>
int *reverse(int ori[],int copy[],int size){ //아니 이게된다고?
    for(int i=0; i<size; i++){
        copy[i] = ori[size-1-i];
    }
}
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
    arr[i] = i;
    printf("arr[%d] = %d\n",i,arr[i]);
}

int copy[n];
reverse(arr,copy,n);

for(int i=0; i<n; i++){
    printf("copy[%d] = %d\n",i,copy[i]);
}

    return 0;
}