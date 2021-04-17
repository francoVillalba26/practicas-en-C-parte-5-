#include <iostream>
using namespace std;

class Empleado{
	private:
		int ident;
		double tasaSalarial;
		int numMaxHoras;
	public:
		Empleado(int = 0, double = 0, int = 0);
		void cambiarDatos(int, double, int);
		void mostraDatos();
};

Empleado::Empleado(int ii, double ts, int nmh){
	ident = ii;
	tasaSalarial = ts;
	numMaxHoras = nmh;
}
void Empleado::cambiarDatos(int ii, double ts, int nmh){
	ident = ii;
	tasaSalarial = ts;
	numMaxHoras = nmh;
	
	return;
}
void Empleado::mostraDatos(){
	cout << "Identificacion del empleado: " << ident << endl
		 << "Tasa salarial: " << tasaSalarial << endl
		 << "Maxima cantidad de horas trabajadas: " << numMaxHoras << endl;
	return;
}

int main(){
	Empleado a, b, c;
	
	a.cambiarDatos(115, 12.5, 500);
	a.mostraDatos();
	
	return 0;
}
