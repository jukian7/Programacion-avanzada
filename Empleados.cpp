
#include "stdafx.h"

#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
enum tipo_empleado
{
	Administrativo, Mantenimiento, Ingenieria, Obrero
};



struct employess
{
	int number;
	float compensation;
	int  tipo;
	int  dia;
	int  mes;
	int  año;

};
////////////////////////////////////////////////////////////////

int main()
{
	employess c1,c2,c3;
	cout << "\n Numero de empleado : "; cin >> c1.number;
	cout << "\n Remuneracion: "; cin >> c1.compensation;
	cout << "\n Tipo de empeado: [0] Administrativo [1] Mantenimiento [2] Ingenieria [3] Obrero "; cin >> c1.tipo;
	cout << "\n Fecha de primer empleo "; cin >> c1.dia;  cout << "/"; cin >> c1.mes; cout << "/"; cin >> c1.año;


	cout << " Empleado:  " << c1.number << " Remuneracion: " << c1.compensation << " Año de primer empleo: " << c1.dia << "/" << c1.mes << "/" << c1.año ;

	switch (c1.tipo)
	{
	case Administrativo: cout << " Tipo de empleado: Administrativo" << "\n"; break;
	case Mantenimiento: cout << " Tipo de empleado: Mantenimiento" << "\n"; break;
	case Ingenieria : cout << " Tipo de empleado: Ingenieria" << "\n"; break;
	case Obrero: cout << " Tipo de empleado: Obrero" << "\n"; break;
		break;
	}
	


	printf("Pulsa INTRO\n");
	while (getchar() != '\n');
	getchar();
	system("clear");
	return 0;
}
