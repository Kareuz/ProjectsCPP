#include <iostream>

using namespace std;


int main() {

	int sad[10][10];
	int Filas, Columnas;

	cout << "Filas: ";
	cin >> Filas;
	cout << "Columnas: ";
	cin >> Columnas;

	for(int i =0; i < Filas; i++){
		for (int j = 0; j < Columnas; j++) {
			if (i == 0 || j == 0 || i == Filas -1 || j == Columnas -1) {
				cout << "1";
			}
			else {
				cout << "0";
			}
			
		}
		cout << "\n";
	}

	}
	
