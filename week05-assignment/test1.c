#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
char *product[6] = { " ", "��ī�ݶ�", "��������Ʈ", "���̼Ҵ�", "���̽�Ƽ", "�����ֽ�" };
int money, tot_price, ch;

int main()
{
	int num;

	do
	{
		printf("\n");
		printf("=======���� �޴�======= \n");
		printf("1. �ݾ� ���� \n");
		printf("2. �ܵ� ��ȯ\n");
		printf("3. ����� ����\n");
		printf("4. ���� \n");
		printf("======================= \n");

		printf("� ������ �Ͻðڽ��ϱ�? ");
		scanf(" %d", &num);

		switch (num)
		{
		case 1:
			amount();
			break;

		case 2:
			change();
			break;

		case 3:
			drink();                                     
			break;

		case 4:
			printf("���α׷��� �����մϴ�.\n");
			return 0;

		default:
			printf("��ȣ�� �߸� �����ϼ̽��ϴ�. \n");
		}

	} while (num != 4);
}

int amount(void)
{
	do                                         
	{
		printf("�����ݾ��� �Ա����ֽñ� �ٶ��ϴ�. >> ");
		scanf("%d", &money);
		if (tot_price > money)
		{
			printf("�����ݾ׿��� %d ���� �����մϴ�. \n", tot_price - money);
		}

	} while (tot_price > money);
	main();
}

int change(void)
{
	printf("�ܵ� ��ȯ �� �Դϴ�... ��ø� ��ٷ� �ּ���!\n");
	ch =  money - tot_price;
	printf("�ܵ�: %d\n", ch);
	
}

int drink(void)
{
	int num, cho, pur;
	int result[12] = { 0 };
	int am[6] = { 0 };
	int inventory[6] = { 0, 20, 20, 20, 20, 20 };
	int price[6] = { 0, 1500, 1500, 1200, 1000, 3000 };
	do
	{
		printf("\n");
		printf("=======��ǰ �޴�======= \n");

		for (int i = 1; i < 6; i++)
		{
			printf("%d. %-10s %5d �� \n", i, product[i], price[i]);
		}
		printf("======================= \n");

		do
		{
			printf("� ��ǰ�� �����Ͻðڽ��ϱ�? ");
			scanf("%d", &num);

			if (num > 5 || num <= 0)
				printf("���� ��ǰ�Դϴ�. \n");

		} while (num > 5 || num <= 0);

		printf("%s �� �����ϼ̽��ϴ�. \n", product[num]);
		printf("%d �� �Դϴ�. \n", price[num]);
		printf("\n");

		do                                   
		{
			printf("�� ���� �����Ͻðڽ��ϱ�? ");
			scanf("%d", &pur);

			if (pur > inventory[num])
				printf("��� �����մϴ�. \n");

		} while (pur > inventory[num]);

		inventory[num] -= pur;
		am[num] += pur;           
		result[num] = price[num] * am[num];    
		printf("�����Ͻ� �ݾ��� %d �� �Դϴ�.\n", result[num]);
		printf("\n");

		printf("�� �����Ͻðڽ��ϱ�?(��: 1 , �ƴϿ�: 0) ");
		scanf("%d", &cho);

	} while (cho == 1);
	for (int i = 1; i <= 5; i++)
	{
		tot_price += result[i];
	}
	printf("�����Ͻ� �� �ݾ��� %d �� �Դϴ�. \n", tot_price);
	main();
}
