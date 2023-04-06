#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
char *product[6] = { " ", "코카콜라", "스프라이트", "데미소다", "아이스티", "과일주스" };
int money, tot_price, ch;

int main()
{
	int num;

	do
	{
		printf("\n");
		printf("=======메인 메뉴======= \n");
		printf("1. 금액 투입 \n");
		printf("2. 잔돈 반환\n");
		printf("3. 음료수 선택\n");
		printf("4. 종료 \n");
		printf("======================= \n");

		printf("어떤 업무를 하시겠습니까? ");
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
			printf("프로그램을 종료합니다.\n");
			return 0;

		default:
			printf("번호를 잘못 선택하셨습니다. \n");
		}

	} while (num != 4);
}

int amount(void)
{
	do                                         
	{
		printf("결제금액을 입금해주시기 바랍니다. >> ");
		scanf("%d", &money);
		if (tot_price > money)
		{
			printf("결제금액에서 %d 원이 부족합니다. \n", tot_price - money);
		}

	} while (tot_price > money);
	main();
}

int change(void)
{
	printf("잔돈 반환 중 입니다... 잠시만 기다려 주세요!\n");
	ch =  money - tot_price;
	printf("잔돈: %d\n", ch);
	
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
		printf("=======상품 메뉴======= \n");

		for (int i = 1; i < 6; i++)
		{
			printf("%d. %-10s %5d 원 \n", i, product[i], price[i]);
		}
		printf("======================= \n");

		do
		{
			printf("어떤 상품을 구매하시겠습니까? ");
			scanf("%d", &num);

			if (num > 5 || num <= 0)
				printf("없는 상품입니다. \n");

		} while (num > 5 || num <= 0);

		printf("%s 를 선택하셨습니다. \n", product[num]);
		printf("%d 원 입니다. \n", price[num]);
		printf("\n");

		do                                   
		{
			printf("몇 개를 구매하시겠습니까? ");
			scanf("%d", &pur);

			if (pur > inventory[num])
				printf("재고가 부족합니다. \n");

		} while (pur > inventory[num]);

		inventory[num] -= pur;
		am[num] += pur;           
		result[num] = price[num] * am[num];    
		printf("구매하신 금액은 %d 원 입니다.\n", result[num]);
		printf("\n");

		printf("더 구매하시겠습니까?(예: 1 , 아니오: 0) ");
		scanf("%d", &cho);

	} while (cho == 1);
	for (int i = 1; i <= 5; i++)
	{
		tot_price += result[i];
	}
	printf("구매하신 총 금액은 %d 원 입니다. \n", tot_price);
	main();
}
