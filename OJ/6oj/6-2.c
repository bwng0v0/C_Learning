#include <stdio.h>
int idx_1(int i, int j){
    return i*3+j;
}
void print2x3(int *matrix){
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i*3+j]);
    }
    printf("\n");
  }
}
void idx_2(int i){
    int i1=0, i2=i;
    if( i>2 ){
        i1 = 1;
        i2 = i -3;
    }
    printf("(%d, %d)",i1,i2);
}

int main(void) {
  int matrix[6];
  //matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf(" ");
  }
  printf("\n");

  return 0;
}