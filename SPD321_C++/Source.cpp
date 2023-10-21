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


int countWord(const char* st)
{
	return 0;
}


char* delWord(const char* st, const char* word)
{
	const char* p;
	int len = strlen(st);
	char* _new = new char[len + 1];
	_new[0] = '\0';
	while (strstr(st, word))
	{
		p = strstr(st, word);
		strncat_s(_new, len + 1, st, p - st);
		st = p + strlen(word);
	}
	strcat_s(_new, len + 1, st);
	return _new;
}


char* replaceWord(const char* st, const char* _old, const char* _new)
{
	return nullptr;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));

	//char str[] = "Hello";  //{ 'H', 'e', 'l', 'l', 'o', '\0'};
	//int arr[] = { 1,2,3,4,5 };

	//cout << arr << endl;
	//cout << str + 2 << endl;

	/*char buff[1024];
	cin.getline(buff, 80);
	cout << buff << endl;

	char* st = new char[strlen(buff) + 1];
	strcpy_s(st, strlen(buff) + 1, buff);
	cout << st << endl;*/


	/*char str1[80];
	cout << "str1 : ";
	cin.getline(str1, 80);


	char str2[80];
	cout << "str2 : ";
	cin.getline(str2, 80);*/


	//strcpy_s(str2, 80, str1);
	//strncpy_s(str2, 80, str1, 5);

	//strcat_s(str2, 80, str1);
	//strncat_s(str2, 80, str1, 5);

	//cout << strcmp(str1, str2) << endl;
	//cout << strncmp(str1, str2, 5) << endl;
	//cout << _stricmp(str1, str2) << endl;
	//cout << _strnicmp(str1, str2, 5) << endl;


	////char* t = strchr(str1, 'q');
	//char* t = strrchr(str1, 'q');
	//if(t != nullptr)
	//	cout << t << endl;


	/*char* t = strstr(str1, str2);
	if(t != nullptr)
		cout << t << endl;*/


	//_strset_s(str1, '#');


	//int i = atoi(str1);
	//double i = atof(str1);
	//long i = atol(str1);
	//cout << i << endl;

	//_itoa(234534555, str1, 36);


	/*cout << isalnum('і') << endl;
	cout << isdigit('5') << endl;
	cout << isspace(' ') << endl;
	cout << ispunct(',') << endl;
	cout << isupper('A') << endl;
	cout << islower('a') << endl;
	cout << isprint('a') << endl;*/



	/*cout << endl;
	cout << str1 << endl;
	cout << str2 << endl;*/

	cout << delWord("nullptr liejwied C++ lwejfw C++", "C++,") << endl;


	system("pause");
}

