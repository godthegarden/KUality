#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	int sub;
	double tot=0, sum = 0;
	char grade[10];

	printf("[Grade program]\n");
	printf("Total number of subjects? ");
	scanf(" %d", &sub);

	for (int i = 0; i < sub; i++) {
		printf("Input grade? ");
		scanf(" %s", grade);
		if (grade == 'A+') tot += 4.5;
		else if (grade == 'A') tot += 4.0;
		else if (grade == 'B+') tot += 3.5;
		else if (grade == 'B') tot += 3.0;
		else if (grade == 'C+') tot += 2.5;
		else if (grade == 'C') tot += 2.0;
		else if (grade == 'D+') tot += 1.5;
		else if (grade == 'D') tot += 1.0;
		else if (grade == 'F') tot += 0.0;
	}
	printf("%.2f\n", tot / (double)sub);
}