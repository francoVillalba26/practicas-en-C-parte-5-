#include <iostream>
#include <iomanip>
using namespace std;

class Fecha
{
	private:
		int mes;
		int dia;
		int anio;
	public:
		Fecha(int = 7, int = 4, int = 2005);
		void estFecha(int, int, int);
		void mostrarFecha();
};

Fecha::Fecha(int mm, int dd, int aaaa){
	mes = mm;
	dia = dd;
	anio = aaaa;
}
void Fecha::estFecha(int mm, int dd, int aaaa){
	mes = mm;
	dia = dd;
	anio = aaaa;
	
	return;
}
void Fecha::mostrarFecha(){
	cout << "La fecha es ";
	cout << setfill('0')
		 << setw(2) << mes << '/'
		 << setw(2) << dia << '/'
		 << setw(2) << anio % 100;
	cout << endl;
	
	return;
}

int main(){
	Fecha a, b, c(4,1,2000);
	
	b.estFecha(12,25,2006);
	a.mostrarFecha();
	b.mostrarFecha();
	c.mostrarFecha();
	 
	return 0;
}
