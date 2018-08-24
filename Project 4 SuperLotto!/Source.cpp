//Project 4 SuperLotto
//Henry Wong
#include <fstream>
#include "Ticket.h"
#include "Linkedlist.h"
#include "HashtableReg.h"
#include "HashTableMeg.h"
using namespace std;

int main() {
	//inputs
	char choice;
	int numChoice;
	//variables and objects
	int draw, year, n1, n2, n3, n4, n5, m;
	string dayofweek, month, date;
	Linkedlist a1;
	HashtableReg h1;
	HashTableMeg h2;
	ifstream instream;
	//start loading in txtfile
	instream.open("SuperLotto.txt");
	if (instream.is_open()) {
		while (instream >> draw >> dayofweek >> month >> date >> year >> n1 >> n2 >> n3 >> n4 >> n5 >> m) {
			//Populates all n1-n5 values to n.
			for (int i = 0; i < reg; i++) {
					if (n1 == i || n2 == i || n3 == i || n4 == i || n5 == i) {
						h1.insert(i, draw, dayofweek, month, date, year, n1, n2, n3, n4, n5, m);
					}
			}
			//Populates all mega values into hashtables.
			for (int i = 0; i < meg; i++) {
				if (m == i) {
					h2.insert(i, draw, dayofweek, month, date, year, n1, n2, n3, n4, n5, m);
				}
			}
			//Populates linked list
			a1.addTicket(draw, dayofweek, month, date, year, n1, n2, n3, n4, n5, m);
		}
	}
	//ACTUALLY PRINTS EVERY ARRAY contents IN HASH FUNCTION, might take a while to display everything.
	/*cout << "PRINTING ALL ARRAY VALUES" << endl;
	h1.print();*/
	/*cout << "PRINTING MEGA VALUES" << endl;
	h2.print();
	cout << endl;*/

	//Menu

	while (true) {
		cout << "WELCOME TO LOTTO NUMBERS!!!!!!!" << endl;
		cout << "Enter a,b,c,d, or e to continue" << endl;
		cout << "___________________" << endl;
		cout << "A. Top 5 numbers" << endl;
		cout << "B. Bottom 5 numbers" << endl;
		cout << "C. Top 5 Meganumbers" << endl;
		cout << "D. Bottom 5 Meganumbers" << endl;
		cout << "E. Search" << endl;
		cout << "X. Exit" << endl;
		cin >> choice;

		if (choice == 'a' || choice == 'A') {
			cout << "Top 5 frequent numbers" << endl;
			cout << "______________________" << endl;
			int regArray[reg];
			int t1 = regArray[0];
			int t2 = regArray[0];
			int t3 = regArray[0];
			int t4 = regArray[0];
			int t5 = regArray[0];
			for (int i = 0; i < reg; i++) {
				regArray[i] = a1.freqOf(i);
			}
			for (int i = 0; i < reg; i++) {
				if (regArray[i] > t1) {
					t5 = t4;
					t3 = t2;
					t2 = t1;
					t1 = regArray[i];
				}
				else if (regArray[i] > t2) {
					t5 = t4;
					t5 = t3;
					t3 = t2;
					t2 = regArray[i];
				}
				else if (regArray[i] > t3) {
					t5 = t4;
					t4 = t3;
					t3 = regArray[i];
				}
				else if (regArray[i] > t4) {
					t5 = t4;
					t4 = regArray[i];
				}
				else if (regArray[i] > t5) {
					t5 = regArray[i];
				}
			}
			for (int i = 0; i < reg; i++) {
				if (regArray[i] == t1) {
					cout << i << " with " << t1 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t2) {
					cout << i << " with " << t2 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t3) {
					cout << i << " with " << t3 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t4) {
					cout << i << " with " << t4 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t5) {
					cout << i << " with " << t5 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl << endl;
				}
			}
		}
		else if (choice == 'b' || choice == 'B') {
			int regArray[reg];
			cout << "top 5 worst chance numbers" << endl;
			cout << "______________________" << endl;
			for (int i = 0; i < reg; i++) {
				regArray[i] = a1.freqOf(i);
			}
			int t1 = regArray[1];
			int t2 = regArray[1];
			int t3 = regArray[1];
			int t4 = regArray[1];
			int t5 = regArray[1];
			for (int i = 1; i < reg; i++) {
				if (regArray[i] < t1 ) {
					t5 = t4;
					t3 = t2;
					t2 = t1;
					t1 = regArray[i];
				}
				else if (regArray[i] < t2) {
					t5 = t4;
					t5 = t3;
					t3 = t2;
					t2 = regArray[i];
				}
				else if (regArray[i] < t3) {
					t5 = t4;
					t4 = t3;
					t3 = regArray[i];
				}
				else if (regArray[i] < t4) {
					t5 = t4;
					t4 = regArray[i];
				}
				else if (regArray[i] < t5) {
					t5 = regArray[i];
				}

			}
			for (int i = 1; i < reg; i++) {
				if (regArray[i] == t1) {
					cout << i << " with " << t1 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t2) {
					cout << i << " with " << t2 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t3) {
					cout << i << " with " << t3 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t4) {
					cout << i << " with " << t4 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl;
				}
				else if (regArray[i] == t5) {
					cout << i << " with " << t5 << " occurences " << endl;
					h1.print10(i);
					cout << "____________________________________" << endl << endl;
				}
			}
		}
		else if (choice == 'c' || choice == 'C') {
			cout << "Top 5 frequent Meganumbers." << endl;
			cout << "______________________" << endl;
			int mega[meg];
			int t1 = mega[0];
			int t2 = mega[0];
			int t3 = mega[0];
			int t4 = mega[0];
			int t5 = mega[0];
			for (int i = 0; i < meg; i++) {
				mega[i] = a1.freqMega(i);
			}
			for (int i = 0; i < meg; i++) {
				if (mega[i] > t1) {
					t5 = t4;
					t3 = t2;
					t2 = t1;
					t1 = mega[i];
				}
				else if (mega[i] > t2) {
					t5 = t4;
					t5 = t3;
					t3 = t2;
					t2 = mega[i];
				}
				else if (mega[i] > t3) {
					t5 = t4;
					t4 = t3;
					t3 = mega[i];
				}
				else if (mega[i] > t4) {
					t5 = t4;
					t4 = mega[i];
				}
				else if (mega[i] > t5) {
					t5 = mega[i];
				}
			}
			for (int i = 0; i < meg; i++) {
				if (mega[i] == t1) {
					cout << i << " with " << t1 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (mega[i] == t2) {
					cout << i << " with " << t2 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (mega[i] == t3) {
					cout << i << " with " << t3 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (mega[i] == t4) {
					cout << i << " with " << t4 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (mega[i] == t5) {
					cout << i << " with " << t5 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl << endl;
				}

			}
		}
		else if (choice == 'd' || choice == 'D') {
			int megaArray[meg];
			cout << "top 5 worst chance Meganumbers." << endl;
			cout << "______________________" << endl;
			for (int i = 0; i < meg; i++) {
				megaArray[i] = a1.freqMega(i);
			}
			int t1 = megaArray[1];
			int t2 = megaArray[1];
			int t3 = megaArray[1];
			int t4 = megaArray[1];
			int t5 = megaArray[1];

			for (int i = 1; i < meg; i++) {
				if (megaArray[i] < t1) {
					t5 = t4;
					t3 = t2;
					t2 = t1;
					t1 = megaArray[i];
				}
				else if (megaArray[i] < t2) {
					t5 = t4;
					t5 = t3;
					t3 = t2;
					t2 = megaArray[i];
				}
				else if (megaArray[i] < t3) {
					t5 = t4;
					t4 = t3;
					t3 = megaArray[i];
				}
				else if (megaArray[i] < t4) {
					t5 = t4;
					t4 = megaArray[i];
				}
				else if (megaArray[i] < t5) {
					t5 = megaArray[i];
				}
			}
			for (int i = 1; i < meg; i++) {
				if (megaArray[i] == t1) {
					cout << i << " with " << t1 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (megaArray[i] == t2) {
					cout << i << " with " << t2 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (megaArray[i] == t3) {
					cout << i << " with " << t3 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (megaArray[i] == t4) {
					cout << i << " with " << t4 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl;
				}
				else if (megaArray[i] == t5) {
					cout << i << " with " << t5 << " occurences " << endl;
					h2.printmeg10(i);
					cout << "____________________________________" << endl << endl;
				}

			}
		}
		else if (choice == 'e' || choice == 'E') {
			cout << "Enter draw number (1375-3000)" << endl;
			cin >> numChoice;
			cout << endl << "Here is the ticket information!" << endl;
			a1.search(numChoice);
			cout << endl;
		}
		else if (choice == 'x' || choice == 'X')
			return 0;
	}
	system("PAUSE");
}
