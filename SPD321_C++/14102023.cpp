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


	/*int bullet[3] = { 50, 50, 50 };
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
	}*/