#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>
#include<conio.h>
#include<fstream>

#include"function.h"
#include"Timer.h"
#include"Struct.h"

#define PRINT cout
#define PI 3.141592
#define BEGIN {
#define END }
#define SQR(n) (n)*(n)
#define ЦИКЛ(n) for(size_t i = 0; i < n; i++)
#define ЯКЩО if

#define SIZE 50

//#define TEST

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

	SetColor(Color::White, Black);
	// |  & >> << 
	/*cout << (3 | 5) << endl;
	cout << (3 & 5) << endl;
	cout << (3 << 2) << endl;*/

	/*PRINT << "Hello" << endl;

	ЦИКЛ(5)
	BEGIN
		cout << "Hello" << endl;
	END

	ЯКЩО(2 == 2)
	cout << SQR(5+1) << endl;*/


//#ifdef TEST
//	int arr[SIZE];
//#else
//	int* arr = new int[SIZE];
//#endif
//
//	setArray(arr, SIZE);



	int arr[] = { 1345,2345,3234,454645,545645 };
	ofstream fout("text.bin", ios::binary);
	fout.write((char*)&arr, sizeof(arr));
	fout.close();

	/*int* b = nullptr;
	int size = 0;
	ifstream in("text.txt");
	int a;

	while(in >> a)
	{
		addValueArray(b, size, a);
	}
	in.close();
	printArray(b, size);*/

	/*ofstream fout("point.txt");
	Point p2[3] = { {'C', 34, 45}, {'D', 32, 51}, {'E', 33, 55} };
	for (size_t i = 0; i < 3; i++)
	{
		p2[i].print();
		fout << p2[i].name << " " << p2[i].x << " " << p2[i].y << endl;
	}*/

	/*ifstream fin("point.txt");
	Point* p = nullptr;
	int size = 0;
	if (fin.is_open())
	{
		Point t;
		while (fin >> t.name >> t.x >> t.y)
		{
			addValueArray(p, size, t);
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		p[i].print();
	}*/

	/*ifstream fin("virsh.txt");
	char buff[80];
	while (!fin.eof())
	{
		fin.getline(buff, 80);
		cout << buff << endl;
	}*/

	/*Human h = { new char[] {"Osipov Oleg"}, 12,1,2000 };
	h.print();*/

	/*ofstream fout("human.txt");
	fout << h.name << endl;
	fout << h.birthDay.day << " " << h.birthDay.month << " " << h.birthDay.year << endl;*/

	
	/*ifstream in("human.txt");
	char buff[80];
	int size;
	in >> size;
	in.get();
	Human* d = new Human[size];
	for (size_t i = 0; i < size; i++)
	{
		in.getline(buff, 80);
		d[i].name = new char[strlen(buff) + 1];
		strcpy_s(d[i].name, strlen(buff) + 1, buff);
		in >> d[i].birthDay.day >> d[i].birthDay.month >> d[i].birthDay.year;
		in.get();

		d[i].print();
	}*/


	SetColor(7, 0);
	system("pause");
}

