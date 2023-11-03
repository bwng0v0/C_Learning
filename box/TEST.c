#include <stdio.h>

// 정수의 비트를 출력하는 함수
void printBits (int num) {
    int numBits = sizeof(num) * 8; // 정수의 비트 수 (1바이트 = 8비트),sizeof는 바이트반환

    for (int i=numBits-1; i>=0; i--) {// 감소식인 이유는 출력순서때문에
        //비트 = num을 오른쪽으로 31칸시프트~0칸시프트
        int bit = (num >> i) & 1; //시프트하고나서 첫비트와 00001하고 비트and연산 -> 시프트후 첫비트가 0이면 0 1이면1
        printf("%d", bit);

        //공백은 선택사항
        if (i % 8 == 0) {
            printf(" "); // 8비트 단위로 공백을 추가
        }
    }

    printf("\n");
}

int main() {
    int x; // 출력할 변수
    scanf("%d",&x);

    printf("비트: ");
    printBits(x);

    return 0;
}
