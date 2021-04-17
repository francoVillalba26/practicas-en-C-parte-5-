#include <iostream>
#include <iomanip>
using namespace std;

// declaracion de clase

class Fecha{
	private:
		int mes, dia, anio;
	public:
		Fecha(int = 7, int = 4, int = 2005);  // constructor
		Fecha(long);          // otro constructor
		void mostrarFecha();  // funcion miembro para desplegar una fecha
};

// seccion de implementacion

Fecha::Fecha(int mm, int dd, int aaaa){
	mes = mm;
	dia = dd;
	anio = aaaa;
}
Fecha::Fecha(long aaaammdd){
	anio = int(aaaammdd/10000.0);  // extrae el año
	mes = int((aaaammdd-anio*10000.0)/100.00);  // extrae el mes
	dia = int(aaaammdd-anio*10000.0-mes*100.0);  // extrae el dia
}
void Fecha::mostrarFecha(){
	cout << "La fecha es ";
	cout << setfill('0')
		 << setw(2) << mes << '/'
		 << setw(2) << dia << '/'
		 << setw(2) << anio % 100;  // extrae los ultimos digitos del año
	cout << endl;
	
	return;
}

int main()
{
	Fecha a, b(4,1,1998), c(20060515L);  // declara tres objetos
	
	a.mostrarFecha();
	b.mostrarFecha();
	c.mostrarFecha();
	
	return 0;
}
