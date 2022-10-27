#include <iostream>

using namespace std;

int main() 
{
	int RandomNumber;
	int eleccion;


	srand(static_cast<unsigned int>(time(0)));

	RandomNumber = rand() % 100 + 1;

	do 
	{
		cout << " " << RandomNumber << endl;
		cout << "Escoge un numero del 1 al 100" << endl;
		cin >> eleccion;

		if (eleccion == RandomNumber) 
		{
			cout << "Ganaste" << endl;
		}
		
		else if (eleccion > RandomNumber) {
			if (eleccion <= RandomNumber + 5) {
				cout << "Estas cerca" << endl;
			}
			else {
			cout << "Tu numero es muy alto" << endl;
			}
			
		}
		else if (eleccion < RandomNumber) {
			if (eleccion >= RandomNumber - 5) {
				cout << "Estas muy cerca" << endl;
			}
			else {

			cout << "Tu numero es muy bajo" << endl;
			}
		}


	} while (RandomNumber != eleccion);
	
}