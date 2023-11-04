#pragma once
#include<iostream>

using namespace std;

struct Point
{
	char name;
	int x;
	int y;

	void print()
	{
		cout << name << "(" << x << ", " << y << ")" << endl;
	}
};




float lenPoint(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


struct Date
{
	int day;
	int month;
	int year;

	void print()
	{
		if (day < 10)
			cout << 0;
		cout << day << ".";
		if (month < 10)
			cout << 0;
		cout << month << ".";
		cout << year << endl;
	}
};


struct Human
{
	char* name;
	Date birthDay;

	void print()
	{
		cout << "Name     : " << name << endl;
		cout << "Birthday : ";
		birthDay.print();
	}
};

enum Transmission
{
	Mechanic, Automat, Variator
};

struct Engine
{
	Transmission transmission;
	int cilinder = 4;

	void start()
	{
		cout << "Engine started.. " << endl;
	}

	void stop()
	{
		cout << "Engine stoped.. " << endl;
	}
};


struct Car
{
	Engine engine = { Transmission::Automat, 8 };

	void move()
	{
		engine.start();
		cout << "Car move..." << endl;
		engine.stop();
	}

	void beep()
	{
		cout << "Beep beep.. " << endl;
	}

	void print()
	{

	}
};


struct Fraction
{
	int c;
	int numerator;
	int denominator;

	void print()
	{
	}

	Fraction add(Fraction f)
	{
		numerator + f.numerator;
		return Fraction();
	}
};


struct Garage
{
	Car* cars;
	int size;

	void print()
	{
		for (size_t i = 0; i < size; i++)
		{
			cars[i].print();
		}
	}

};