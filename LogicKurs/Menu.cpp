#include "Sys.h"

void menu(int i, char* m)
{
	system("cls");
	m[i] = '>';
	m[i + 1] = '<';
	printf("\n\n\n\n");
	printf("      ______________            _______________            _______________      \n");
	printf("     |              |          |               |          |               |     \n");
	printf("   %c |    ������    | %c      %c |   ���������   | %c      %c |     �����     | %c   \n", m[0], m[1], m[2], m[3], m[4], m[5]);
	printf("     |______________|          |_______________|          |_______________|     \n");
	printf("\n\n\n\n\n\n\n");
	printf("������� - �����������; 1 - �����;");
	m[i] = ' ';
	m[i + 1] = ' ';
}

void set(int i, char* m)
{
	system("cls");
	m[i] = '>';
	m[i + 1] = '<';
	printf("\n\n\n\n");
	printf("      ______________            _______________            _______________      \n");
	printf("     |              |          |               |          |               |     \n");
	printf("   %c |    ������    | %c      %c |    ��������   | %c      %c |     �����     | %c   \n", m[0], m[1], m[2], m[3], m[4], m[5]);
	printf("     |______________|          |_______________|          |_______________|     \n");
	printf("\n\n\n\n\n\n\n");
	printf("������� - �����������; 1 - �����; 2 - �����");
	m[i] = ' ';
	m[i + 1] = ' ';
}

void raz()
{
	int n;
	FILE* F;
	char name[] = "Settings.txt";

	system("cls");
	printf("������� ������ ���������:"); 
	scanf("%d", &n); 

	if ((F = fopen(name, "r+")) == NULL)
	{
		F = fopen(name, "w+");
		stand();
	}
	fseek(F, 19, SEEK_SET);
	fprintf(F, "%d     ", n);

	fclose(F);
}

void lab()
{
	int n;
	FILE* F;
	char lab[31];
	char name[] = "Settings.txt";

	system("cls");
	printf("������� �������� ���������:");
	scanf("%30s", lab);

	if ((F = fopen(lab, "r+")) == NULL)
	{
		printf("��� ������");
		_getch();
		return;
	}
	fclose(F);
	if ((F = fopen(name, "r+")) == NULL)
	{
		F = fopen(name, "w+");
		stand();
	}
	fseek(F, 43, SEEK_SET);
	fputs(lab, F);
	fclose(F);
}

void dvigat_2()
{
	char m[6] = { ' ',' ',' ',' ',' ',' ' };
	int i = 0, k = 0, n;
	set(i, m);
	while (k == 0)
	{
		switch (_getch())
		{
		case 75: if (i != 0) i = i - 2; set(i, m); break;
		case 77: if (i != 4) i = i + 2; set(i, m); break;
		case 49: if (i == 0) raz(); if (i == 2) lab(); if (i == 4) stand(); break;
		case 50: dvigat_1();
		}
	}
}

void dvigat_1()
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
		case 49: if (i == 0) start(); if (i == 2) dvigat_2(); if (i == 4) exit(0); break;
		}
	}
}

