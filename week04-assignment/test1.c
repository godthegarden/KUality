//�ִ����� ���α׷� (�Լ� ���� ��)
#include <stdio.h>

int main() {
	int a = 24;
	int b = 36;
	int temp, gcd;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	gcd = a;
	printf("�ִ�����: %d\n", gcd);

	int c = 15;
	int d = 25;

	a = c;
	b = d;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	gcd = a;
	printf("�ִ�����: %d\n", gcd);

	int e = 40;
	int f = 60;

	a = e;
	b = f;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	gcd = a;
	printf("�ִ�����: %d\n", gcd);

	return 0;
}