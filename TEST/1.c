#include <stdio.h>
int main(){

int arr[3];
scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);

int max = arr[0];
for(int i=0; i<3; i++){
    if(max<arr[i])
    max = arr[i];
}

int sum = 0;
for(int i=0; i<3; i++){
    sum += arr[i];
}

if(max>=sum-max){
    int min = arr[0];
    for(int i=0; i<3; i++){
        if(min>arr[i]){
        min = arr[i];
        }
    }
    sum -= max;
    int new = sum-1;
    sum += new;
    printf("%d",sum);
}else{
    printf("%d",sum);
}

    return 0;
}
//41 64 16 = X
//41 41 16 = 98
//16 64 16 = X
//41+16 = 57 + 56