/*Point p;
	p.name = 'A';
	p.x = 10;
	p.y = 20;

	Point p1 = {'B', 13, 23};
	printPoint(p);
	printPoint(p1);

	Point p2[3] = { {'C', 34, 45}, {'D', 32, 51}, {'E', 33, 55} };
	for (size_t i = 0; i < 3; i++)
	{
		printPoint(p2[i]);
	}*/

	/*Point* p3 = &p;
	p3->name = 'W';
	printPoint(p);*/


	/*const int size = 15;
	Point p[size];
	for (size_t i = 0; i < size; i++)
	{
		p[i].name = 65 + i;
		p[i].x = rand() % 10;
		p[i].y = rand() % 10;

		printPoint(p[i]);
	}

	float maxLen = 0;
	int i1 = 0;
	int i2 = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			float len = lenPoint(p[i], p[j]);
			if (len > maxLen)
			{
				maxLen = len;
				i1 = i;
				i2 = j;
			}
		}
	}
	cout << "Max Len = " << maxLen << endl;
	printPoint(p[i1]);
	printPoint(p[i2]);*/


	//Point p1 = { 'B', 13, 23 };
	//p1.print();

	//Date d = { 4,1,2023 };
	//d.print();

	//Human h = { new char[] {"Oleg"}, 12,1,2000 };
	//h.print();

	//Car car;
	//car.move();
	//car.beep();

	//Fraction f1 = { 1,3 };
	//Fraction f2 = { 3,7 };
	//Fraction f3 = f1.add(f2);

	//Garage g;
	////g.menu();