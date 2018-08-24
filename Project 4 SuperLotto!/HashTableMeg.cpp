#include "HashTableMeg.h"



HashTableMeg::HashTableMeg()
{

}


HashTableMeg::~HashTableMeg()
{
}

void HashTableMeg::insert(int x, int draw, string dayofweek, string month, string date, int year, int n1, int n2, int n3, int n4, int n5, int m)
{
	megtable[x] = new Ticket(draw, dayofweek, month, date, year, n1, n2, n3, n4, n5, m, megtable[x]);

}

void HashTableMeg::print()
{
	for (int i = 1; i < meg; i++) {
		Ticket *ptr = megtable[i];
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

void HashTableMeg::printmeg10(int x)
{
	Ticket *ptr = megtable[x];
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
