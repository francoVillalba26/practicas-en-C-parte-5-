#include <iostream>
using namespace std;

class tipoHab
{
	private:
		double largo;
		double ancho;
	public:
		tipoHab(double = 0.0, double = 0.0);
		void mostrarValHab();
		void estValNueHab(double,double);
		void calcularAreaHab();
};

tipoHab::tipoHab(double l, double a)
{
	largo = l;
	ancho = a;
	cout << "Se ha creado un objeto habitacion nuevo usando el constructor por omision.\n\n";
}
void tipoHab::mostrarValHab()
{
	cout << " largo = " << largo
		 << "\n ancho = " << ancho << endl;
}
void tipoHab::estValNueHab(double l, double a)
{
	largo = l;
	ancho = a;
}
void tipoHab::calcularAreaHab()
{
	cout << (largo * ancho);
}

int main()
{
	tipoHab habUno(12.5, 18.2);
	
	cout << "Los valores para esta habitacion son: \n";
	habUno.mostrarValHab();
	cout << "\nEl area del piso de esta habitacion es: ";
	habUno.calcularAreaHab();
	
	habUno.estValNueHab(5.5, 9.3);
	
	cout << "\n\nLos valores para esta habitacion han sido cambiados a: \n";
	habUno.mostrarValHab();
	
	cout << "\nEl area delpiso de esta habitacion es: ";
	habUno.calcularAreaHab();
	
	cout << endl;
	return 0;
}
