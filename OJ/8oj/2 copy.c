#include <stdio.h>

int days(int m);

void print_remain(int m, int d) {
    static int sum = 0;

    if (m > 0) {
        sum += days(m);
        print_remain(m - 1, d);
    } else {
        int remaining_days = sum - d;
        printf("%d일 남음\n", remaining_days);
    }
}

int days(int m) {
    if (m == 2) // 2월
        return 28;
    else if (m <= 7) { // 7월 이하
        if (m % 2 == 0) {
            return 30;
        } else {
            return 31;
        }
    } else { // 8월 이상
        if (m % 2 == 0) {
            return 31;
        } else {
            return 30;
        }
    }
}

int main() {
    int m, day;
    printf("월과 날짜를 입력하세요 (예: 12 31): ");
    scanf("%d %d", &m, &day);

    if (m >= 1 && m <= 12 && day >= 1 && day <= days(m)) {
        // 입력된 월과 날짜가 유효한 범위 내에 있는지 확인
        int remaining_days = 365; // 새로운 연도의 총 일 수로 초기화
        for (int i = m; i <= 12; i++) {
            remaining_days -= days(i);
        }
        remaining_days -= day - 1; // 입력된 월의 날짜까지 빼기
        printf("%d일 남음\n", remaining_days);
    } else {
        printf("유효하지 않은 입력입니다.\n");
    }

    return 0;
}
