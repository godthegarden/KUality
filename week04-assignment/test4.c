#include <stdio.h>
//main�� ����
//��Ģ�����δ� �̷��� �ؾ���
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for (int ndx = 0; ndx != argc; ++ndx)
		printf("argv[%d] --> %s\n", ndx, argv [ndx]);
	printf("argv[argv] = %p\n", (void*)argv[argc]);
}