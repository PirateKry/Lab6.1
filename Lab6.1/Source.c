#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846

void main()
{
	setlocale(LC_CTYPE, "RUS");
	//1 �������
	/*
	int yeas;
	printf("������� ���\n");
	scanf("%i", &yeas);
	int dr = yeas % 4, drFSe = yeas % 100, drFTw = yeas % 400;

	//1.1
	if (dr == 0)
		printf("\n��� %i ����������",yeas);
	else
		printf("\n��� %i �� ����������", yeas);

	//1.2
	if (dr == 0 && drFSe !=0)
		printf("\n��� %i ����������", yeas);
	else if (drFTw = 0)
		printf("\n��� %i ����������", yeas);
	else
		printf("\n��� %i �� ����������", yeas);
		*/
		//2 �������
		/*
		float x, y;
		printf("������� ����� �\n");
		scanf("%f", &x);
		if (x <= -3.5)
		{
			y = (4 * pow(x, 2)) + (2 * x) - 19;
			//-3.5 23
			printf("\nF(x) = %f", y);
		}
		else if (x > 3.5)
		{
			y = -((2 * x) / (-4 * x + 1));//3.6 0.53731
			printf("\nF(x) = %f", y);
		}
		*/

		//3 �������
		/*
		int n;
		printf("������� ����� n\n");
		scanf("%i", &n);
		if (n < 1000)
		{
			int summa = (n / 100) * ((n / 10) % 10) * (n % 10);
			if (summa > 99)
			{
				printf("����� ���� ����� �������� ����������, ������������ = %i", summa);
			}
			else
			{
				printf("����� ���� ����� �� �������� ����������, ������������ = %i", summa);
			}
		}
		else
		{
			printf("�� ����� ����� ������ ��� ������ 1000");
		}
		*/

		//��
	int X, Y;
	printf("������� ���������� x � y\n");
	scanf("%i %i", &X, &Y);

	if (Y <= 3 && Y >= -4)
	{
		if (X >= 0 && X <= 8)
		{
			printf("�������� ���������� (%i,%i) ����������� �������", X, Y);
		}
		else
		{
			printf("�������� ���������� (%i,%i) �� ����������� �������", X, Y);
		}
	}
	else
	{
		printf("�������� ���������� (%i,%i) �� ����������� �������", X, Y);
	}
}