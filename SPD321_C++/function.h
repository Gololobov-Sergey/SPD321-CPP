#pragma once
#include<iostream>
#include<Windows.h>
#include<iomanip>


using namespace std;

template<class T>
void printArray(T* arr, int size)
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
void bubbleSort(T* arr, int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				/*T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				swap(arr[i], arr[j + 1]);
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
void printArray2D(T arr[][10], int row, int col)
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
T* addValueArray(T* arr, int* size, T value)
{
	T* temp = new T[*size + 1];
	for (size_t i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = value;
	delete[] arr;
	(*size)++;
	return temp;
}

template<class T>
T* removeValueArray(T* arr, int* size) 
{
	T* temp = new T[*size - 1];
	for (size_t i = 0; i < *size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	(*size)--;
	return temp;
}