// 02.09.2023 //


	/*cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;*/

	// bool        - 1b

	// char        - 1b

	// short       - 2b
	// int 
	// long        - 4b
	// long long   - 8b

	// float       - 4b
	// double      - 8b
	// long double - 10b

	// modify type name;

	/*int year;
	year = 2023;
	cout << year << endl;

	const int a = 5;

	unsigned int b = -4;
	cout << b << endl;*/

	// -, ++, --
	// = + - * / %, += -=  *= /= %=

	// !
	// <  > <=  >=  != == &&(and), ||(or), ^(xor)

	/*int a = 5;
	int b = 4;
	int c;*/

	/*a = a + b;
	a += b;

	a = a + 1;
	a += 1;
	a++;
	++a;
	a--;*/

	/*c = ++a * (a++ - ++b);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/


	//cout << a << endl;   //5
	//cout << ++a << endl; //6
	//cout << a++ << endl; //6
	//cout << a << endl;   //7

	/*c = !a < b;
	cout << c << endl;*/


	/*int a, b, s;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	s = a * b;
	cout <<  "a = " << a << ", b = " << b << ", Площа: " << s << endl;*/


	/*int b = 5;
	float a = (float)b / 2;
	cout << a << endl;

	float c = (5 + 6) / 2.;*/

	/*char t = 'a' + 3;
	cout << t << endl;
	cout << (int)t << endl;*/


	/*if (condition)
	{
		oper;
	}
	else
	{
		oper;
	}*/


	/*int a, b, c, d, count = 0;
	cin >> a >> b >> c >> d;

	if (a % 2 == 0)
	{
		count++;
	}

	if (b % 2 == 0)
	{
		count++;
	}

	if (c % 2 == 0)
	{
		count++;
	}

	if (d % 2 == 0)
	{
		count++;
	}
	cout << count << endl;*/


	/*int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << a << endl;
	}
	else
	{
		if (b > c)
		{
			cout << b << endl;
		}
		else
		{
			cout << c << endl;
		}
	}*/


	/*int a, b, res = 0;
	char op;
	cin >> a >> op >> b;*/

	/*if (op == '+')
	{
		res = a + b;
		cout << res << endl;
	}
	else
	{
		if (op == '-')
		{
			res = a - b;
			cout << res << endl;
		}
		else
		{
			if (op == '*')
			{
				res = a * b;
				cout << res << endl;
			}
			else
			{
				if (op == '/')
				{
					res = a / b;
					cout << res << endl;
				}
				else
				{
					cout << "Error operation" << endl;
				}
			}
		}
	}*/
	/*switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	case '%' :
		res = a % b;
		break;
	default:
		cout << "Error operation" << endl;
		break;
	}
	cout << res << endl;*/


	/*int choice;
	cin >> choice;

	switch (choice)
	{
	case LOAD:
		break;
	case SAVE:
		break;
	case EXIT:
		break;
	default:
		break;
	}*/

	/*int a, b,c, max;
	cin >> a >> b >> c;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	*/

	// (condition)? oper1 : oper2;
	//(a > b) ? max = a : max = b;
	//max = (a > b) ? a : b;

	//max = (a > b && a > c) ? a : (b > c) ? b : c;

	//cout << max << endl;