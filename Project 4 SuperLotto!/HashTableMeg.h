#pragma once
#include "Ticket.h"
#include "Linkedlist.h"
const int meg = 27;

class HashTableMeg :
	public Ticket
{
public:
	HashTableMeg();
	~HashTableMeg();
	void insert(int x, int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m);
	void print();
	void printmeg10(int x);
private:
	Ticket * megtable[meg];
	
};

