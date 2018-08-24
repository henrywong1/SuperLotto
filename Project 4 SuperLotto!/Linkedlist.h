#pragma once
#include "Ticket.h"
class Linkedlist
{
public:
	Linkedlist();
	Linkedlist(Ticket *h);
	void addTicket(int d, string w, string m, string date, int y, int n1, int n2, int n3, int n4, int n5, int mega);
	void print();
	void search(int x);
	int freqOf(int x);
	int freqMega(int x);
	~Linkedlist();
protected:
	Ticket * head;
	int t1, t2, t3, t4, t5;
};

