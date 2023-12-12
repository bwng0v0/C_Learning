#include <stdio.h>
typedef struct arr{
    int arr[10];
}arr;
typedef struct arrarr{
arr arrarr[10];
} arrarr;
int main(){

arrarr arrarrarr[3];

arrarrarr[0].arrarr[0].arr[0] = 34;
printf("%d",arrarrarr[0].arrarr[0].arr[0]);

    return 0;
}