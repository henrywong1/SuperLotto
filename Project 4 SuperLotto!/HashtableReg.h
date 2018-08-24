#pragma once
#include "Ticket.h"
#include "Linkedlist.h"
//size of array
const int reg = 47;

class HashtableReg :
	public Ticket
{
public:
	HashtableReg();
	void insert(int x, int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m);
	~HashtableReg();
	void print();
	void print10(int x);
private:
	Ticket *regtable[reg];
};

