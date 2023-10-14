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


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));

	/*int a = 5;      int b = 5;
	int* pa = &a;   int& rb = b;
	*pa = 100;      rb = 100;
	pa = &b;        rb = a;

	int a = 5;
	int b = 4;*/

	//const int* pa = &a;
	////*pa = 100; // not!
	//a = 100;
	//pa = &b;
	////*pa = 100; // not!

	//int* const pa = &a;
	//*pa = 100;
	////pa = &b;   // not!

	//const int* const pa = &a;
	//*pa = 100;   // not!
	//pa = &b;b    // not!





	/*int size;
	cin >> size;

	int* A = new int[size];
	setArray(A, size);
	printArray(A, size);

	int* B = nullptr;
	int sizeB = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (A[i] % 2 == 0)
		{
			addValueArray(B, sizeB, A[i]);
		}
	}

	printArray(B, sizeB);*/
	


	// type_f (*name_ptr) (param_f);

	/*void(*message)();
	message = hello;
	message();
	message = goodbye;
	message();

	void(*func[])() = { hello, goodbye };
	for (size_t i = 0; i < 2; i++)
	{
		func[i]();
	}*/

	/*int(*operation[])(int, int) = { sum, diff, mult, division };
	int a, b;
	cin >> a >> b;
	cout << "1 +, 2 - , 3 *, 4 /  ";
	int op;
	cin >> op;
	cout << operation[op - 1](a, b) << endl;*/


	/*int size;
	cin >> size;

	int* A = new int[size];
	setArray(A, size, 0, 1000);
	printArray(A, size);
	bubbleSort(A, size, evenFirst);
	printArray(A, size);*/


	int bullet[3] = { 50, 50, 50 };
	void(*shot)(int*) = nullptr;
	
	while (true)
	{
		if (_kbhit())
		{
			char c = _getch();
			if (c == 'c')
			{
				shot = logic(bullet);
			}
			if (c == 'a')
			{
				shot = arrow;
			}
			if (c == 'g')
			{
				shot = gun;
			}
			if (c == 'm')
			{
				shot = mashineGun;

			}

			if(shot)
				shot(bullet);
		}
	}



	system("pause");
}

