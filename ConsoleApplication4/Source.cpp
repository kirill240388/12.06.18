#include <stdlib.h>
#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;
int main()
{
	srand(time(NULL));
	int task;
	cin >> task;
	if (task == 4)
	{
		/*4.	������� ��������� �������� ��������� ��� ����������� � ������������ ������������ ������� ������ �� �������, ���������� �� ����������� ����� ������ �� �������������, ������� ����� : 
		��� ����� � 1, ������ 2 ��� � 13, �� 2 �� 5 ��� � 16. ��������� ��������� ������� �������� ��� �������� ������� ����� �������(�� 3 �� 5) � ������� ��������� � ������ � ������������ 
		��� ��������� ����� 45.*/
		int lvl, k,stage,rate;
		cin >> stage;
		lvl = 2 + rand() % 3;
		if (stage == 0)
		{
			k = 1;
			rate = k*lvl;
			cout << rate << endl;
		}
		if (stage < 2 && stage>0)
		{
			k = 13;
			rate = k*lvl;
			cout << rate << endl;
		}
		if (stage >= 2 || stage <= 5)
		{
			k = 16;
			rate = k*lvl;
			cout << rate << endl;
		}


	}
	if (task == 5)
	{
		/*5.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 20 ��������� � ���� ����� "�����" � ���������� �����.��������, 1 �����, 2 �����, 5 ������*/
		int a;
		cin >> a;
		if (a == 1)
		{
			cout << a << " rubl" << endl;
		}
		if (a > 1 && a < 5)
		{
			cout << a << " rublya" << endl;
		}
		if (a > 4 && a < 21)
		{
			cout << a << " rublei" << endl;
		}
	}
	if (task == 6)
	{
		/*6.	������ ����� �� 1 �� 31. ���������� ���������(���������) ���� ���������� ��� ���������(������ ����� �������� 28 ����), ���� ��������� ���������� ���� 27 �������.*/
		int a;
		cin >> a;
		if (a + 27 == 55)
		{
			cout << " polnolunie 24 sentyabrya" << endl;
		}
		else if (a + 14 == 41)
		{
			cout << " novolunie 10 sentyabrya" << endl;
		}
		else
		{
			cout << " obychnaya luna" << endl;
		}
	}
	if (task == 7)
	{
		/*1.	�������� ���������, ������� �� ���� ������ � ������������ ����������� ��������� �� ��������� � ��������� ������� �� ����� : ������ - ��� 7272, 25�����; ������� - ��� 7252, 18�����;
		������ - ��� 7172 13�����; ����� - ��� 7292, 11�����.*/
		int code, time,tarif, price;
		cin >> code;
		cin >> time;
		if (code == 7272)
		{
			tarif = 25;
			price = tarif*time;
			cout << "Almaty" << endl;
			cout << "Stoimost peregovorov " << price << " tenge" << endl;
		}
		if (code == 7252)
		{
			tarif = 18;
			price = tarif*time;
			cout << "Shymkent" << endl;
			cout << "Stoimost peregovorov " << price << " tenge" << endl;

		}
		if (code == 7172)
		{
			tarif = 13;
			price = tarif*time;
			cout << "Astana" << endl;
			cout << "Stoimost peregovorov " << price << " tenge" << endl;
		}
		if (code == 7292)
		{
			tarif = 11;
			price = tarif*time;
			cout << "Aktau" << endl;
			cout << "Stoimost peregovorov " << price << " tenge" << endl;
		}
	}
	if (task == 8)
	{
		/*2.	�������� ���������, ������� � ����������� �� ��������� ����� ������ ��������� � ��� �������� �� 1�� 4 � / � - ������(1); �� 5 - 10 � / c ���������(2); 
		�� 9 - 18 � / c - �������(3); ������ 19 � / c - ���������(4).*/
		int type;
		type = 1 + rand() % 3;
		switch (type)
		{
		case 1:
		{
			cout << "Slabiy veter, skorost vetra jn 1 do 4 m\s" << endl;
			break;
		}
		case 2:
		{
			cout << "Umerennyi veter, skorost vetra jn 5 do 10 m\s" << endl;
			break;
		}


		case 3:
		{
			cout << "Silnyi veter, skorost vetra jn 9 do 18 m\s" << endl;
			break;
		}
		case 4:
		{
			cout << "Uragannyi veter, skorost vetra > 19 m\s" << endl;
			break;
		}
		}
		
		
		
	}
	if (task == 9)
	{
		/*3.	�������� ������� ���������� ��������������� �������� �� ��� ����(1����������, 2 - � ���� ��������, 3 - � ���� ��������� ���������) � ���� ���������(a, b, c) �� ���� 2 �����.
		������ � ���������� ����� ����, �������, � ������ ������(5, 10, 20 �����).������ ������ ��������(���������, ��������: �����������, ������� �, � ����� �����(�������� 1, 2, 5, 10)
		� ���� ���������, ��������, �2�� + 1��.������������� ��������� ������������� ������ ��� ��������.*/
		int theme, payment, sdacha, variant, currency1, currency2, currency3, currency4, currency;
		cin >> theme;
		cin >> variant;
		cin >> payment;
		if (theme == 1)
		{
			if (variant == 1)
			{
				cout << "Novogodnie, variant a" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 2)
			{
				cout << "Novogodnie, variant b" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 3)
			{
				cout << "S dnyom rozhdeniya, variant c" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}

		}
		if (theme == 2)
		{
			if (variant == 1)
			{
				cout << "Novogodnie, variant a" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 2)
			{
				cout << "Novogodnie, variant b" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 3)
			{
				cout << "Novogodnie, variant c" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
		}
		if (theme == 3)
		{
			if (variant == 1)
			{
				cout << "S dnyom zashitnika otechastva, variant a" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 2)
			{
				cout << "S dnyom zashitnika otechastva, variant b" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
			if (variant == 3)
			{
				cout << "S dnyom zashitnika otechastva, variant c" << endl;
				sdacha = payment - 2;
				currency1 = sdacha / 10 * 10;
				currency2 = (sdacha - currency1) / 5 * 5;
				currency3 = (sdacha - currency1 - currency2) / 2 * 2;
				currency4 = (sdacha - currency1 - currency2 - currency3);
				currency = currency1 + currency2 + currency3 + currency4;
				cout << currency1 / 10 << " x " << currency1 << endl;
				cout << currency2 / 5 << " x " << currency2 << endl;
				cout << currency3 / 2 << " x " << currency3 << endl;
				cout << currency4 / 1 << " x " << currency4 << endl;
				cout << currency << endl;

			}
		}
	}
	if (task == 10)
	{
		/*3.	���������� �������� ���������, ������� ��������� ������������ �� ������ ������� ���������.������������ ��� ������ ��� ����� ����������� �����.��������� ����� ������ : 
		��������� ��������� ������� ����� �� ������.������������ ������ ������ ����� � ������� �� ������ ��������� �� ������� ��� ���.���� ��� � �������� ��� � ���������� ���������.*/
		int a, b,check,reply;
		cin >> a;
		cin >> b;
		cin >> reply;
		check = a*b;
		if (check == reply)
		{
			cout << "otvet pravilnyi" << endl;
			cout << check;
		}
		else
		{
			cout << "otvet ne pravilnyi" << endl;
			cout << check<<endl;
		}
	}
	if (task == 11)
	{
		/*1.	�������� ���������, ������� �� ���� ��������(���� d ����� n) ���������� ���� ������� : � 22 ����� �� 21 ������ - ����(4); � 22 ������ �� 21 ��� - �����(5); � 22 ��� �� 21 ���� - 
		��������(6); � 22 ���� �� 21 ���� - ���(7); � 22 ���� �� 21 ������� - ���(8); � 22 ������� �� 21 �������� - ����(9); 22 �������� �� 21 ������� - ����(10); � 22 ������� �� 21 ������ - 
		��������(11); � 22 ������ �� 21 ������� - �������(12); � 22 ������� �� 21 ������ - �������(1); 22 ������ �� 21 ������� - �������(2); � 22 ������� �� 21 ����� - ����(3).*/
		int d, n;
		cin >> d;
		cin >> n;
		if ((d >= 22 && n== 3) || (d <= 22 && n == 4))
		{
			cout << "oven" << endl;
		}
		if ((d >= 22 && n == 4) || (d <= 21 && n == 5))
		{
			cout << "telec" << endl;
		}
		if ((d >= 22 && n == 5) || (d <= 21 && n == 6))
		{
			cout << "bliznec" << endl;
		}
		if ((d >= 22 && n == 6) || (d <= 21 && n == 7))
		{
			cout << "rak" << endl;
		}
		if ((d >= 22 && n == 7) || (d <= 21 && n == 8))
		{
			cout << "lev" << endl;
		}
		if ((d >= 22 && n == 8) || (d <= 21 && n == 9))
		{
			cout << "deva" << endl;
		}
		if ((d >= 22 && n == 9) || (d <= 21 && n == 10))
		{
			cout << "vesy" << endl;
		}
		if ((d >= 22 && n == 10) || (d <= 11 && n == 11))
		{
			cout << "scorpion" << endl;
		}
		if ((d >= 22 && n == 11) || (d <= 21 && n == 12))
		{
			cout << "strelec" << endl;
		}
		if ((d >= 22 && n == 12) || (d <= 21 && n == 1))
		{
			cout << "kozerog" << endl;
		}
		if ((d >= 22 && n == 1) || (d <= 21 && n == 2))
		{
			cout << "vodolei" << endl;
		}
		if ((d >= 22 && n == 2) || (d <= 21 && n == 3))
		{
			cout << "ryby" << endl;
		}

	}
	if (task == 12)
	{

	}
}