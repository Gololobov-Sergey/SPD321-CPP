#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>

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




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	srand(time(0));


	int a = 5;
	cout << &a << endl;
	cout << sizeof(a) << endl;
	cout << a << endl;
	cout << typeid(a).name() << endl;

	int* p = &a;
	cout << p << endl;
	*p = 100;
	cout << a << endl;

	/*int b = 1;
	int* pb = nullptr;

	cout << (p < pb) << endl;
	cout << (p > pb) << endl;
	cout << (p == pb) << endl;
	cout << (p != pb) << endl;*/


	//int aa[] = { 81,23,45,76,54 };

	//cout << aa << endl;

	//cout << *(aa + 0) << endl;  // aa[0]
	//cout << *(aa + 1) << endl;  // aa[1]
	//cout << *(aa + 2) << endl;  // aa[2]

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << *(aa + i) << " ";
	//}
	//cout << endl;

	//for (int* i = aa; i < aa + 5; i++)
	//{
	//	cout << *i << " ";
	//}
	//cout << endl;

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << aa[i] << " ";
	//}
	//cout << endl;



	/*cout << p - 1 << endl;
	cout << *(p - 1) << endl;

	double d = 4.32;
	double* pp = &d;
	cout << pp << endl;
	cout << pp + 1 << endl;
	cout << *(pp + 1) << endl;*/




	/*int b = 4;
	p = &b;
	*p = 999;

	cout << b << endl;

	p = &a;

	double d = 4.32;
	double* pp = &d;

	cout << sizeof(pp) << endl;

	char c = 'A';
	char* cp = &c;
	cout << sizeof(c) << endl;
	cout << sizeof(cp) << endl;*/


	/*int size;
	cin >> size;

	int* pp = new int[size];
	setArray(pp, size);
	printArray(pp, size);
	
	pp = addValueArray(pp, &size, 999);

	printArray(pp, size);
	
	pp = removeValueArray(pp, &size);

	printArray(pp, size);

	delete[] pp;*/


	int size;
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
			B = addValueArray(B, &sizeB, A[i]);
		}
	}

	printArray(B, sizeB);


	system("pause");
}

