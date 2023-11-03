#include <stdio.h>
int scan_matrix(int matrix[],int r,int c){ // r = 열의길이 , c = 행의길이

for(int i=0; i<r; i++){
  for(int j=0; j<c; j++){
    scanf("%d",&matrix[i*c+j]);
  }
}

}int print_matrix(int matrix[],int r,int c){

for(int i=0; i<r; i++){
  for(int j=0; j<c; j++){
    printf("%d ",matrix[i*c+j]);
  }
  printf("\n");
}

}int find_2D(int matrix[],int r,int c,int matrix1){ //1번 인덱스랑 같은값
//출력예시
//value 4 is found at (0, 1) (1, 2) (2, 0)
printf("value %d is found at ",matrix1);
for(int i=0; i<r*c; i++){
  if(matrix[i] == matrix1){
    printf("(%d, %d) ",i/c,i%c);
  }
}
}

int main(void) {
  int r,c;
  int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c);// matrix 요소 값을 입력 받는 함수.
  
  printf("----------\n");
  
  print_matrix(matrix,r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]);//matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.
  return 0;
}