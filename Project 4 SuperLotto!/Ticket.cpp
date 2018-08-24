#include "Ticket.h"

Ticket::Ticket()
{
	drawNum = years = num1 = num2 = num3 = num4 = num5 = mega = 0;
	dayofweeks = months = dates = " ";
}

Ticket::Ticket(int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m, Ticket *n)
{
	drawNum = draw;
	dayofweeks = dayofweek;
	months = month;
	dates = date;
	years = year;
	num1 = n1;
	num2 = n2;
	num3 = n3;
	num4 = n4;
	num5 = n5;
	mega = m;

	next = n;
	
}




Ticket::~Ticket()
{
}

int Ticket::getDraw()
{
	return drawNum;
}

void Ticket::setDraw(int x)
{
	drawNum = x;
}

string Ticket::getDayofweek()
{
	return dayofweeks;
}

void Ticket::setDayofweek(string n)
{
	dayofweeks = n;
}

string Ticket::getMonth()
{
	return months;
}

void Ticket::setMonth(string n)
{
	months = n;
}

string Ticket::getDate()
{
	return dates;
}

void Ticket::setDate(string n)
{
	dates = n;
}

int Ticket::getYear()
{
	return years;
}

void Ticket::setYear(int x)
{
	years = x;
}



int Ticket::getNum1()
{
	return num1;
}

void Ticket::setNum1(int x)
{
	num1 = x;
}

int Ticket::getNum2()
{
	return num2;
}

void Ticket::setNum2(int x)
{
	num2 = x;
}

int Ticket::getNum3()
{
	return num3;
}

void Ticket::setNum3(int x)
{
	num3 = x;
}

int Ticket::getNum4()
{
	return num4;
}

void Ticket::setNum4(int x)
{
	num4 = x;
}

int Ticket::getNum5()
{
	return num5;
}

void Ticket::setNum5(int x)
{
	num5 = x;
}

int Ticket::getMega()
{
	return mega;
}

void Ticket::setMega(int x)
{
	mega = x;
}

Ticket * Ticket::getNext()
{
	return next;
}

void  Ticket::setNext(Ticket * n)
{
	next = n;
}

