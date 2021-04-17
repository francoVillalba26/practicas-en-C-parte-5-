#include <iostream>
#include <iomanip>
#include <string>
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
		int diaSemana();
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
int Fecha::diaSemana(){
	int T, mm, aa, ss, dd, ssaa;
	if(mes<3){
		mm = mes + 12;
		ssaa=anio-1;
	}
	else{
		mm = mes;
		ssaa = anio;
	}
	ss = int(ssaa/100);
	aa = ssaa % 100;
	dd = dia;
	T = dd + int(26*(mm+1)/10) + aa + int(aa/4)-(2*ss);
	int diaSem = T % 7;
	if(diaSem<0){
		return diaSem + 7;
	}
	else{
		return diaSem;
	}
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

string mostrarDia(int a){
	string dia;
	switch(a){
		case 0:
			return dia = "Sabado";
		case 1:
			return dia = "Domingo";
		case 2:
			return dia = "Lunes";
		case 3:
			return dia = "Martes";
		case 4:
			return dia = "Miercoles";
		case 5:
			return dia = "Jueves";
		case 6:
			return dia = "Viernes";
	}
	return dia;
}

int main(){
	Fecha a(12,17,2020), b, c(7,23,2020);
	int num;
	
	b.estFecha(5,10,2020);
	
	a.mostrarFecha();
	num = a.diaSemana();
	cout << "Cae un dia " << mostrarDia(num) << endl;
	
	b.mostrarFecha();
	num = b.diaSemana();
	cout << "Cae un dia " << mostrarDia(num) << endl;
	
	c.mostrarFecha();
	num = c.diaSemana();
	cout << "Cae un dia " << mostrarDia(num) << endl;
	 
	return 0;
}
