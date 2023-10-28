#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>
#include<conio.h>

#include"function.h"
#include"Timer.h"

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

	/*int a = 5;
	int* p1 = &a;
	int** p2 = &p1;

	cout << *p2 << endl;

	cout << *p1 << endl;
	cout << **p2 << endl;*/

	/*int row, col;
	cin >> row >> col;
	int** p = nullptr;
	createArray2D(p, row, col);
	setArray2D(p, row, col);
	printArray2D(p, row, col);*/

	/*cout << p[1][3] << endl;
	cout << *(p[1] + 3) << endl;
	cout << *(*(p + 1) + 3) << endl;*/

	/*for (size_t i = 0; i < col; i++)
	{
		swap(p[0][i], p[row - 1][i]);
	}*/

	//swap(p[0], p[row - 1]);

	/*int* b = new int[col];
	setArray(b, col);
	printArray(b, col);

	addRowIndexArray2D(p, row, col, 2, b);
	cout << endl;
	printArray2D(p, row, col);

	addRowIndexArray2D(p, row, col, 1);
	cout << endl;
	printArray2D(p, row, col);*/


	/*delRowArray2D(p, row);
	cout << endl;
	printArray2D(p, row, col);*/


	//deleteArray2D(p, row);


	int row = 5;
	char** pib = new char* [row];
	for (size_t i = 0; i < row; i++)
	{
		char buff[80];
		cin.getline(buff, 80);
		int len = strlen(buff);
		pib[i] = new char[len + 1];
		strcpy_s(pib[i], len + 1, buff);
	}

	bubbleSort(pib, row, strCompare);

	cout << endl;
	for (size_t i = 0; i < row; i++)
	{
		cout << pib[i] << endl;
	}

	system("pause");
}

