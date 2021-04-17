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
		void diaSig();
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
void Fecha::diaSig(){
	if(dia == 28 && mes == 2){
		dia = 1;
		mes++;
	}
	else if(dia == 30){
		if(mes==4 || mes==6 || mes==9 || mes==10){
			dia = 1;
			mes++;
		}
	}
	else if(dia == 31 && mes == 12){
		dia = 1;
		mes = 1;
		anio++;
	}
	else if(dia == 31){
		dia = 1;
		mes++;
	}
	else{
		dia++;
	}
	
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
	Fecha a(2,28,2020), b(4,30,2020), c(6,31,2020), d(12,31,2020), e(11,15,2020);

	a.mostrarFecha();
	b.mostrarFecha();
	c.mostrarFecha();
	d.mostrarFecha();
	e.mostrarFecha();
	
	a.diaSig();
	b.diaSig();
	c.diaSig();
	d.diaSig();
	e.diaSig();
	
	cout << endl;
	a.mostrarFecha();
	b.mostrarFecha();
	c.mostrarFecha();
	d.mostrarFecha();
	e.mostrarFecha();
	 
	return 0;
}
