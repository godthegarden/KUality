//�ִ����� ���α׷� (�Լ� �ִ� ��)
//�ߺ��� ���� �� �ִ�
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int result = gcd(24, 36);
    printf("�ִ�����: %d\n", result);

    int result2 = gcd(15, 25);
    printf("�ִ�����: %d\n", result2);

    int result3 = gcd(40, 60);
    printf("�ִ�����: %d\n", result3);

    return 0;
}
