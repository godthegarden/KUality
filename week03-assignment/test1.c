#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	char c;
	printf("Input num : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Input operator : ");
	scanf("%c", &c);
	scanf("%c", &c);
	switch (c) {
	case '*':
		printf("%d\n", n1 * n2 * n3);
		break;
	case '+':
		printf("%d\n", n1 * n2 * n3);
		break;
	case '-':
		printf("%d\n", n1 - n2 - n3);
		break;
	case '/':
		printf("%d\n", n1 / n2 / n3);
		break;
	}

	if (c == '*') {
		printf("%d\n", n1 * n2 * n3);
	}
	else if (c == '+') {
		printf("%d\n", n1 * n2 * n3);
	}
	else if (c == '-') {
		printf("%d\n", n1 - n2 - n3);
	}
	else if (c == '/') {
		printf("%d\n", n1 / n2 / n3);
	}
	else {
		printf("Invalid operator\n");
	}
}