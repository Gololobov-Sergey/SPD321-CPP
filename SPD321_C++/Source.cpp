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
auto Sum(T1 a, T2 b, T3 c) -> decltype(a+b)
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

	1011110100;

	srand(time(0));

	//const int size = 100000;
	//int arr[size];
	//setArray(arr, size, 0, 30000);
	////printArray(arr, size);
	//sort(arr, arr + size);
	//
	//Timer t;
	//insertionSort(arr, size);
	//cout << t.elapsed() << endl;
	////printArray(arr, size);



	const int row = 4;
	const int col = 4;
	int arr[10][10];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	printArray2D(arr, row, col);
	//

	for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 0; j < row - 1 - i; j++)
		{
			if (arr[j][0] > arr[j + 1][0])
			{
				for (size_t k = 0; k < col; k++)
				{
					swap(arr[j][k], arr[j+1][k]);
				}
			}
		}
	}
	
	cout << endl;
	printArray2D(arr, row, col);

	system("pause");
}

