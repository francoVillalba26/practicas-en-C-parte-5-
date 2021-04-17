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
		void compara(Fecha, Fecha);
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
void Fecha::compara(Fecha fech1, Fecha fech2){
	int a = (fech1.anio*100000)+(fech1.mes*100)+(fech1.dia);
	int b = (fech2.anio*100000)+(fech2.mes*100)+(fech2.dia);
	if(a>b){
		cout << "La fecha ";
		fech1.mostrarFecha();
		cout << " es mayor que ";
		fech2.mostrarFecha();
		cout << endl;
	}
	if(a<b){
		cout << "La fecha ";
		fech1.mostrarFecha();
		cout << " es menor que ";
		fech2.mostrarFecha();
		cout << endl;
	}
	else{
		cout << "Ambas fechas son iguales." << endl;
	}
}
void Fecha::mostrarFecha(){
	cout << setfill('0')
		 << setw(2) << mes << '/'
		 << setw(2) << dia << '/'
		 << setw(2) << anio % 100;
	
	return;
}

int main(){
	Fecha a, b, c(4,1,2000), d;
	
	b.estFecha(12,25,2006);
	a.mostrarFecha();
	cout << endl;
	b.mostrarFecha();
	cout << endl;
	c.mostrarFecha();
	cout << endl;
	
	d.compara(a,b);
	 
	return 0;
}
