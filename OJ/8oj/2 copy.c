#include <stdio.h>

int days(int m);

void print_remain(int m, int d) {
    static int sum = 0;

    if (m > 0) {
        sum += days(m);
        print_remain(m - 1, d);
    } else {
        int remaining_days = sum - d;
        printf("%d�� ����\n", remaining_days);
    }
}

int days(int m) {
    if (m == 2) // 2��
        return 28;
    else if (m <= 7) { // 7�� ����
        if (m % 2 == 0) {
            return 30;
        } else {
            return 31;
        }
    } else { // 8�� �̻�
        if (m % 2 == 0) {
            return 31;
        } else {
            return 30;
        }
    }
}

int main() {
    int m, day;
    printf("���� ��¥�� �Է��ϼ��� (��: 12 31): ");
    scanf("%d %d", &m, &day);

    if (m >= 1 && m <= 12 && day >= 1 && day <= days(m)) {
        // �Էµ� ���� ��¥�� ��ȿ�� ���� ���� �ִ��� Ȯ��
        int remaining_days = 365; // ���ο� ������ �� �� ���� �ʱ�ȭ
        for (int i = m; i <= 12; i++) {
            remaining_days -= days(i);
        }
        remaining_days -= day - 1; // �Էµ� ���� ��¥���� ����
        printf("%d�� ����\n", remaining_days);
    } else {
        printf("��ȿ���� ���� �Է��Դϴ�.\n");
    }

    return 0;
}
