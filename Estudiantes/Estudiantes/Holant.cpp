#include <iostream>

using namespace std;

int main() 
{
	
	float promedio;
	float promedioFinal = 0;
    int estudiantes;
	float datozz = 0;

	cout << "Cuantos estudiantes tienes: " << endl;
	cin >> estudiantes;

	for (int i = 1; i <= estudiantes; i++) {
		cout << "Ingresa el promedio del alumno: " << endl;
		cin >> promedio;

		cout << "Alumno " << i << endl;

		datozz = datozz + promedio;
	}
		
	promedioFinal = datozz / estudiantes;

	cout << "Promedio de los alumnos: " << promedioFinal << endl;
}