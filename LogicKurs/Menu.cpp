#include "Sys.h"

void menu(int i, char* m)
{
	system("cls");
	m[i] = '>';
	m[i + 1] = '<';
	printf("\n\n\n\n");
	printf("      ______________            _______________            _______________      \n");
	printf("     |              |          |               |          |               |     \n");
	printf("   %c |    Играть    | %c      %c |   Настройки   | %c      %c |     Выход     | %c   \n", m[0], m[1], m[2], m[3], m[4], m[5]);
	printf("     |______________|          |_______________|          |_______________|     \n");
	printf("\n\n\n\n\n\n\n");
	printf("Стрелки - Перемещение; 1 - Выбор; 2 - метка;");
	m[i] = ' ';
	m[i + 1] = ' ';
}

void dvigat()
{
	char m[6] = { ' ',' ',' ',' ',' ',' ' };
	int i = 0, k = 0;
	menu(i, m);
	while (k == 0)
	{
		switch (_getch()) 
		{
		case 75: if (i != 0) i = i - 2; menu(i, m); break;
		case 77: if (i != 4) i = i + 2; menu(i, m); break;
		case 49: if (i == 0) return; menu(i, m); if (i == 4) exit(0); break;
		}
	}
}


