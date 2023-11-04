#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>
#include<conio.h>

#include"function.h"
#include"Timer.h"
#include"Struct.h"

using namespace std;


enum OPERATION
{
	LOAD, SAVE, EXIT
};


//type name(param)
//{
//	body;
//}

void printLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}


template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}

float avg(int a, int b, int c)
{
	float d = ((float)a + b + c) / 3;
	return d;
}


void hello()
{
	cout << "Hello" << endl;
}

void goodbye()
{
	cout << "GoodBye" << endl;
}


int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

void gun(int* bullet)
{
	cout << "->" << endl;
	bullet[0]--;
}

void mashineGun(int* bullet)
{
	cout << "->->->->->" << endl;
	bullet[1] -= 5;
}


void arrow(int* bullet)
{
	cout << ">>----->" << endl;
	bullet[2]--;
}


void (*logic(int* bullet))(int*)
{
	void(*weapon[])(int*) = { gun, mashineGun, arrow };
	return weapon[findArray(bullet, 3, maxValueArray(bullet, 3))];
}


int lenStr(const char* st)
{
	int count = 0;
	while (st[count] != '\0')
	{
		count++;
	}
	return count;
}

bool strCompare(char* st1, char* st2)
{
	if (strcmp(st1, st2) > 0)
		return true;
	return false;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));

	/*Point p;
	p.name = 'A';
	p.x = 10;
	p.y = 20;

	Point p1 = {'B', 13, 23};
	printPoint(p);
	printPoint(p1);

	Point p2[3] = { {'C', 34, 45}, {'D', 32, 51}, {'E', 33, 55} };
	for (size_t i = 0; i < 3; i++)
	{
		printPoint(p2[i]);
	}*/

	/*Point* p3 = &p;
	p3->name = 'W';
	printPoint(p);*/


	/*const int size = 15;
	Point p[size];
	for (size_t i = 0; i < size; i++)
	{
		p[i].name = 65 + i;
		p[i].x = rand() % 10;
		p[i].y = rand() % 10;

		printPoint(p[i]);
	}

	float maxLen = 0;
	int i1 = 0;
	int i2 = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			float len = lenPoint(p[i], p[j]);
			if (len > maxLen)
			{
				maxLen = len;
				i1 = i;
				i2 = j;
			}
		}
	}
	cout << "Max Len = " << maxLen << endl;
	printPoint(p[i1]);
	printPoint(p[i2]);*/


	Point p1 = { 'B', 13, 23 };
	p1.print();

	Date d = { 4,1,2023 };
	d.print();

	Human h = { new char[] {"Oleg"}, 12,1,2000 };
	h.print();

	Car car;
	car.move();
	car.beep();

	Fraction f1 = { 1,3 };
	Fraction f2 = { 3,7 };
	Fraction f3 = f1.add(f2);

	Garage g;
	//g.menu();


	system("pause");
}

