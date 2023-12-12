#include <stdio.h>
#include <string.h>
typedef struct product{
    char name[20];
    int price;
    int sales;
}Product;

void search_brand(Product a[], int n){
    char target[20];
    scanf("%s",&target);

    for ( int i=0; i<n; i++ ){
        if ( strcmp( target, a[i].name ) == 0 ){
            printf("%s %d %d",a[i].name, a[i].price, a[i].sales);
        }
    }
}
void print_arr(Product arr[], int arr_len){
    int total = 0;
    for ( int i=0; i<arr_len; i++ ){
    printf("%s %d %d\n",arr[i].name, arr[i].price, arr[i].sales);
    total += arr[i].sales;
    }

    printf("매출액 총계:%d",total);
}




int main(){

Product list[5];
for ( int i=0; i<5; i++ ){
    scanf("%s %d %d",&list[i].name, &list[i].price, &list[i].sales);
}

int command;
scanf("%d",&command);

if ( command == 1 ){
    search_brand(list,5);
}else if ( command == 2 ){
    print_arr(list,5);
}

    return 0;
}