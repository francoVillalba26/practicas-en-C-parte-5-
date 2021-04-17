#include <iostream>
#include <iomanip>
using namespace std;

class Rectan
{
	private:
		double largo;
		double ancho;
	public:
		double perimetro();
		double area();
		void estDatos(double, double);
		void mostrarDatos();
};

double Rectan::perimetro(){
	return (2*largo+2*ancho);
}

double Rectan::area(){
	return (largo*ancho);
}

void Rectan::estDatos(double l, double a){
	largo = l;
	ancho = a;
	
	return;
}

void Rectan::mostrarDatos(){
	cout << "El largo del rectangulo es: " << largo << endl
		 << "El ancho del rectangulo es: " << ancho << endl
		 << "El perimetro del rectangulo es: " << perimetro() << endl
		 << "El area del rectangulo es: " << area() << endl;
	return;
}

int main(){
	Rectan obj;
	
	obj.estDatos(34.67,12.19);
	obj.mostrarDatos();
	 
	return 0;
}
