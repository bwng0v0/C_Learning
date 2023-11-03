#include <stdio.h>
#define m 3
int sum_2Darr(int arr[][m],int n){ //머야이게
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = i*n+j+1;
        }
    }

    printf("%d",sum_2Darr(arr,n));

    return 0;
}