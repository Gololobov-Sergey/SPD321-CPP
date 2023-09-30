// type name[size];

	//const int size = 10;
	//int arr[size]; // = { 3,6,5,3,2 };

	//cout << arr << endl;

	/*arr[0] = 12;
	arr[1] = 1;*/

	/*for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}*/

	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int k = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			k++;
	}*/

	/*int k = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			k++;
	}
	cout << "Count 0 = " << k << endl;

	int k0 = 0;
	for (size_t i = 0; arr[i] != 1; i++)
	{
		k0++;
	}
	cout << "Count 0 to 1 = " << k0 << endl;*/


	/*int max = arr[0];

	for (int i = 0; i < 10; ++i) {
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;*/

	//for (size_t i = 0; i < size/2; i++)
	//{
	//	/*int t = arr[i];
	//	arr[i] = arr[size - 1 - i];
	//	arr[size - 1 - i] = t;*/

	//	swap(arr[i], arr[size - 1 - i]);
	//}


	/*for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}*/

	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/



	// type name[row][col];
	//const int row = 4;
	//const int col = 4;
	//int arr[row][col];// = { {2,4,6},{7,6},4,3,2 };
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % 10;
	//	}
	//}

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << setw(3) << arr[i][j];
	//	}
	//	cout << endl;
	//}

	/*int maxSum = INT_MIN;
	int imax = 0;
	for (size_t i = 0; i < row; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			imax = i;
		}
	}
	cout << imax << endl;*/