#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int factorial(int n) {
	//���� �̸� ���� ����Ű ctrl + r r
	int result = 1;
	for (int i = 1; i <= n; i++) result *= i;
	return result;

	/* while���� �ۼ� ����
	int result = 1;
	while(n > 0) {
		result *= n;
		n--;
	}
	return result;
	*/
}

int main() {
	int n;
	printf("Input num >> ");
	scanf(" %d", &n);

	printf("%d! = %d", n, factorial(n));

	return 0;
}