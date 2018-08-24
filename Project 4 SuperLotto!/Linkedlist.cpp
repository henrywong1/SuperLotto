#include "Linkedlist.h"
#include "HashtableReg.h"


Linkedlist::Linkedlist()
{
	head = NULL;
}

Linkedlist::Linkedlist(Ticket * h)
{
	head = h;
}

void Linkedlist::addTicket(int d, string w, string m, string date, int y, int n1, int n2, int n3, int n4, int n5, int mega)
{
	
	if (head == NULL) {
		head = new Ticket(d, w, m, date, y, n1, n2, n3, n4, n5, mega,NULL);
	}
	else {
		Ticket *current = head;
		while (current->getNext() != NULL) {
			current = current->getNext();
		}
		Ticket * node = new Ticket(d, w, m, date, y, n1, n2, n3, n4, n5, mega, NULL);
		current->setNext(node);
	}
	
}

void Linkedlist::print()
{
	Ticket *ptr = head;
	while (ptr != NULL) {
		cout << "Draw Number: " << ptr->getDraw() << "     Date:" << ptr->getDayofweek() << " ";
		cout << ptr->getMonth() << " " << ptr->getDate() << " ";
		cout << ptr->getYear() << "     Num(1-4): " << ptr->getNum1() << "    ";
		cout << ptr->getNum2() << "    " << ptr->getNum3() << "    ";
		cout << ptr->getNum4() << "    " << ptr->getNum5() << "    Meganumber: ";
		cout << ptr->getMega() << endl;
		ptr = ptr->getNext();
	}
}

void Linkedlist::search(int x)
{
	Ticket *ptr = head;
	while (ptr != NULL) {
		if (ptr->getDraw() == x) {
			cout << "Draw Number: " << ptr->getDraw() << "     Date:" << ptr->getDayofweek() << " ";
			cout << ptr->getMonth() << " " << ptr->getDate() << " ";
			cout << ptr->getYear() << "     Num(1-4): " << ptr->getNum1() << "    ";
			cout << ptr->getNum2() << "    " << ptr->getNum3() << "    ";
			cout << ptr->getNum4() << "    " << ptr->getNum5() << "    Meganumber: ";
			cout << ptr->getMega() << endl;
			break;
		}
		ptr = ptr->getNext();
	}
}

int Linkedlist::freqOf(int x)
{
	Ticket *ptr = head;
	int frequency = 0;
	while (ptr != NULL) {
		if (ptr->getNum1() == x || ptr->getNum2() == x || ptr->getNum3() == x || ptr->getNum4() == x || ptr->getNum5() == x || ptr->getMega() == x) {
			frequency++;
		}
		ptr = ptr->getNext();
	}
	return frequency;
}

int Linkedlist::freqMega(int x)
{
	Ticket *ptr = head;
	int frequency = 0;
	while (ptr != NULL) {
		if (ptr->getMega() == x) {
			frequency++;
		}
		ptr = ptr->getNext();
	}
	return frequency;
}




Linkedlist::~Linkedlist()
{
}
