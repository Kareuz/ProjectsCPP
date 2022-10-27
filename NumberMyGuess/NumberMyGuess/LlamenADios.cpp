#include <iostream>

using namespace std;

int main() 
{
	srand(static_cast<unsigned int>(time(0)));

	int guess;
	int option;
	bool winner = false;
		guess = rand() % 100 + 1;

	do {
		cout << "Tu numero es: " << guess << endl;

		cout << "1.-Acertaste" << endl;
		cout << "2.-Nel qlero, muy bajo" << endl;
		cout << "3.-Nel qlero, muy alto" << endl;
		
		cin >> option;

		if (option == 1) {
			cout << "A casa platita" << endl;
			winner = true;
		}
		else if (option == 2) {
			guess = guess + 20;
		}
		else if (option == 3) {
			guess = guess - 5;
		}
	
		
	} while (!winner);
}