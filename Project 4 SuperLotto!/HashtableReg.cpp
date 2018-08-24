#include "HashtableReg.h"



HashtableReg::HashtableReg()
{
	for (int i = 0; i < reg; i++) {
		regtable[i] = NULL;
	}
}

void HashtableReg::insert(int x, int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m)
{
	regtable[x] = new Ticket(draw, dayofweek, month, date, year, n1, n2, n3, n4, n5, m, regtable[x]);
}


HashtableReg::~HashtableReg()
{
}

void HashtableReg::print()
{
	for (int i = 0; i < reg; i++) {
		Ticket *ptr = regtable[i];
		cout << "table[" << i << "] = ";
		while (ptr != NULL) {
			cout << "Draw Number: " << ptr->getDraw() << "     Date:" << ptr->getDayofweek() << " ";
			cout << ptr->getMonth() << " " << ptr->getDate() << " ";
			cout << ptr->getYear() << "     Num(1-4): " << ptr->getNum1() << "    ";
			cout << ptr->getNum2() << "    " << ptr->getNum3() << "    ";
			cout << ptr->getNum4() << "    " << ptr->getNum5() << "    Meganumber: ";
			cout << ptr->getMega() << endl;
			ptr = ptr->getNext();
		}
		cout << endl;
	}
}

void HashtableReg::print10(int x)
{
	Ticket *ptr = regtable[x];
	int counter = 0;
	cout << "EXAMPLES" << endl;
	while (ptr != NULL) {
		cout << "Draw Number: " << ptr->getDraw() << "     Date:" << ptr->getDayofweek() << " ";
		cout << ptr->getMonth() << " " << ptr->getDate() << " ";
		cout << ptr->getYear() << "     Num(1-4): " << ptr->getNum1() << "    ";
		cout << ptr->getNum2() << "    " << ptr->getNum3() << "    ";
		cout << ptr->getNum4() << "    " << ptr->getNum5() << "    Meganumber: ";
		cout << ptr->getMega() << endl;
		counter++;
		if (counter > 9)
			break;
		ptr = ptr->getNext();
	}
	cout << endl;
}
