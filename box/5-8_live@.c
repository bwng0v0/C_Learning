#include <stdio.h>
// 가로로 출력말고 세로출력 냈었는데 대부분 못풀음
int main(){

int people;
scanf("%d",&people);
int arr[people];

for( int i=0; i<people; i++ ){
    scanf("%d",&arr[i]);
}

// 0부터 100까지 구간별로
// 요소가 범위내라면 *을 출력함
for(int i=0; i<10; i++){
    printf("%d~%d: ",i*10,i*10+9);
    for(int j=0; j<people; j++){
        if( (i*10)<=arr[j] && arr[j]<=(i*10+9) ){
            printf("*");
        }
    }
    printf("\n");
}

printf("100: ");
for(int j=0; j<people; j++){
        if( arr[j] == 100 ){
            printf("*");
        }
    }


    return 0;
}