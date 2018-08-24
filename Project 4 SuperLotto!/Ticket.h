#pragma once
#include <iostream>
using namespace std;
#include <string>

class Ticket
{
public:
	Ticket();
	Ticket(int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m, Ticket *n);
	~Ticket();
	
	//mutators and accessors
	int getDraw();
	void setDraw(int x);

	string getDayofweek();
	void setDayofweek(string n);
	string getMonth();
	void setMonth(string n);
	string getDate();
	void setDate(string n);

	int getYear();
	void setYear(int x);

	int getNum1();
	void setNum1(int x);
	int getNum2();
	void setNum2(int x);
	int getNum3();
	void setNum3(int x);
	int getNum4();
	void setNum4(int x);
	int getNum5();
	void setNum5(int x);
	int getMega();
	void setMega(int x);

	Ticket *getNext();
	void setNext(Ticket *n);
	


private:
	int drawNum, years, num1, num2, num3, num4, num5, mega;
	string dayofweeks, months, dates;
	Ticket *next;
};


