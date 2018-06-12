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
		/*4.	Рейтинг бакалавра заочного отделения при поступлении в магистратуру определяется средним баллом по диплому, умноженным на коэффициент стажа работы по специальности, который равен : 
		нет стажа – 1, меньше 2 лет – 13, от 2 до 5 лет – 16. Составить программу расчета рейтинга при заданном среднем балле диплома(от 3 до 5) и вывести сообщение о приеме в магистратуру 
		при проходном балле 45.*/
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
		/*5.	Написать программу, которая при вводе числа в диапазоне от 1 до 20 добавляет к нему слово "рубль" в правильной форме.Например, 1 рубль, 2 рубля, 5 рублей*/
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
		/*6.	Ввести число от 1 до 31. Определить ближайшую(следующую) дату полнолуния или новолуния(лунных месяц содержит 28 дней), если последнее полнолуние было 27 августа.*/
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
		/*1.	Написать программу, которая по коду города и длительности переговоров вычисляет их стоимость и результат выводит на экран : Алматы - код 7272, 25тенге; Шымкент - код 7252, 18тенге;
		Астана - код 7172 13тенге; Актау - код 7292, 11тенге.*/
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
		/*2.	Написать программу, которая в зависимости от характера ветра выдает сообщение о его скорости от 1до 4 м / с - слабый(1); от 5 - 10 м / c умеренный(2); 
		от 9 - 18 м / c - сильный(3); больше 19 м / c - ураганный(4).*/
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
		/*3.	Почтовый автомат предлагает поздравительные открытки на три темы(1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества) в трех вариантах(a, b, c) по цене 2 тенге.
		Ввести с клавиатуры номер темы, вариант, и купюру оплаты(5, 10, 20 тенге).Выдать нужную открытку(сообщение, например: «Новогодние, вариант с», а также сдачу(купюрами 1, 2, 5, 10)
		с виде сообщения, например, «2тн + 1тн».Предусмотреть обработку неправильного номера или варианта.*/
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
		/*3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения.Пользователь сам вводит два целых однозначных числа.Программа задаёт вопрос : 
		результат умножения первого числа на второе.Пользователь должен ввести ответ и увидеть на экране правильно он ответил или нет.Если нет – показать еще и правильный результат.*/
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
		/*1.	Написать программу, которая по дате рождения(день d месяц n) определяет знак Зодиака : с 22 марта по 21 апреля - Овен(4); с 22 апреля по 21 мая - Телец(5); с 22 мая по 21 июня - 
		Близнецы(6); с 22 июня по 21 июля - Рак(7); с 22 июля по 21 августа - Лев(8); с 22 августа по 21 сентября - Дева(9); 22 сентября по 21 октября - Весы(10); с 22 октября по 21 ноября - 
		Скорпион(11); с 22 ноября по 21 декабря - Стрелец(12); с 22 декабря по 21 января - Козерог(1); 22 января по 21 февраля - Водолей(2); с 22 февраля по 21 марта - Рыбы(3).*/
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