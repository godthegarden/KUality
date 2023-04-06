#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int factorial(int n) {
	//변수 이름 변경 단축키 ctrl + r r
	int result = 1;
	for (int i = 1; i <= n; i++) result *= i;
	return result;

	/* while문도 작성 가능
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