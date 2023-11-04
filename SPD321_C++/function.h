#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>


using namespace std;

template<class T>
void printArray(const T* arr, const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T* arr, int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}


void setArray(double arr[], int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void reverse(int arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size-1-i]);
	}
}

template<class T>
int findArray(T* arr, int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}


template<class T>
T maxValueArray(T* arr, int size)
{
	T max = arr[0];

	for (int i = 0; i < size; ++i) 
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


double my_pow(double a, int n)
{
	double res = 1;
	for (int i = 0; i < abs(n); i++)
	{
		res *= a;
	}
	return (n < 0) ? 1 / res : res;
}


bool isPerfect(int n)
{
	int s = 1;
	for (size_t i = 2; i < n; i++)
	{
		if (n % i == 0) 
		{
			s += i;
		}
	}
	return (s == n) ? true : false;
}


void perfectInterval(int a, int b)
{
	for (size_t i = a; i <= b; i++)
	{
		if (isPerfect(i))
			cout << i << " ";
	}
	cout << endl;
}

template<class T>
bool ascending(T a, T b)
{
	return a > b;
}

template<class T>
bool descending(T a, T b)
{
	return a < b;
}


bool evenFirst(int a, int b)
{
	if (a % 2 == 1 && b % 2 == 0)
		return true;
	if (a % 2 == 0 && b % 2 == 1)
		return false;
	return ascending(a, b);
}

bool lastNumber(int a, int b)
{
	if (a % 10 > b % 10)
		return true;
	/*if (a % 10 < b % 10)
		return false;*/
	if (a % 10 == b % 10)
		return ascending(a, b);
}

template<class T>
void bubbleSort(T* arr, int size, bool(*method)(T,T) = ascending)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				/*T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


template<class T>
void selectionSort(T* arr, int size)
{
	for (size_t current = 0; current < size - 1; current++)
	{
		int imin = current;
		for (size_t i = current + 1; i < size; i++)
		{
			if (arr[i] < arr[imin])
			{
				imin = i;
			}
		}
		if (current != imin)
			swap(arr[current], arr[imin]);
	}
}


template<class T>
void insertionSort(T* arr, int size)
{
	T current;
	int k;
	for (size_t i = 1; i < size; i++)
	{
		current = arr[i];
		k = i - 1;
		while (k >= 0 && arr[k] > current)
		{
			arr[k + 1] = arr[k];
			k--;
		}
		arr[k + 1] = current;
	}
}



template<class T>
void addValueArray(T*& arr, int& size, const T& value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;
	size++;
	arr = temp;
}

template<class T>
void removeValueArray(T*& arr, int& size) 
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	size--;
	arr = temp;
}



///////// ARRAY 2D ///////////

template<class T>
void createArray2D(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void deleteArray2D(T**& arr, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}


template<class T>
void printArray2D(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
}


template<class T>
void setArray2D(T** arr, int row, int col, int min = 0, int max = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}


template<class T>
void addRowArray2D(T**& arr, int& row, int col, T* newRow = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}
	temp[row] = new T[col]{ 0 };
	if (newRow != nullptr)
	{
		for (size_t i = 0; i < col; i++)
		{
			temp[row][i] = newRow[i];
		}
	}
	delete[] arr;
	row++;
	arr = temp;
}


template<class T>
void delRowArray2D(T**& arr, int& row)
{
	T** temp = new T * [row - 1];
	for (size_t i = 0; i < row - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[row - 1];
	delete[] arr;
	row--;
	arr = temp;
}

template<class T>
void addRowIndexArray2D(T**& arr, int& row, int col, int index, T* newRow = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	temp[index] = new T[col]{ 0 };
	if (newRow != nullptr)
	{
		for (size_t i = 0; i < col; i++)
		{
			temp[index][i] = newRow[i];
		}
	}
	for (size_t i = index; i < row; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;
	row++;
	arr = temp;
}

template<class T>
void addColumn(T**& arr, int row, int& col, T* newColumn)
{
	for (size_t i = 0; i < row; i++)
	{
		addValueArray(arr[i], col, newColumn[i]);
		col--;

		/*T* temp = new T[col + 1];
		for (size_t j = 0; j < col; j++)
		{
			temp[j] = arr[i][j];
		}
		temp[col] = newColumn[i];
		delete[] arr[i];
		arr[i] = temp;*/
	}
	col++;
}