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


	/*int row = 5;
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
	}*/


	/*int row, col;
	cin >> row >> col;
	int** p = nullptr;
	createArray2D(p, row, col);
	setArray2D(p, row, col);
	printArray2D(p, row, col);

	int* b = new int[row];
	setArray(b, row);
	printArray(b, row);

	addColumn(p, row, col, b);

	cout << endl;
	printArray2D(p, row, col);*/