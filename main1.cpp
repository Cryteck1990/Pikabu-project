#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
int main()
{
	const int startingBalance = 500;
	const int turnCost = 50;
	const int doubleBonus = 60;
	const int tripleBonus = 100;

	int money = startingBalance;
	char panel0 = 'X';
	char panel1 = 'X';
	char panel2 = 'X';
	srand( time( 0 ) );

	do
	{
		system("cls");


		printf("\n\n");
		printf("\t ######### \n");
		printf("\t# BANDITO #\n");
		printf("\t###########\n");
		printf("\t#         #\n");
		printf("\t#  %c %c %c  #\n", panel0, panel1, panel2);
		printf("\t#         #\n");
		printf("\t###########\n");
		printf("\n");
		printf("\n");
		printf("Player money: %i$ \n", money);

		_getch();

		money = money - turnCost;

		panel0 = 3 + ( rand() % 4 );
		panel1 = 3 + ( rand() % 4 );
		panel2 = 3 + ( rand() % 4 );

		if ((panel0 == panel1) && (panel0 == panel2))
			{
				money = money + tripleBonus;
			}
		else
		{
			if ((panel0 == panel1) || (panel0 == panel2) || (panel1 == panel2))
			{
				money = money + doubleBonus;
			}
		}
	} 
	while (money >= turnCost);
	return 0;
};