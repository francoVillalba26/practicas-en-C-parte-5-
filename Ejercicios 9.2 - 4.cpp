#include <iostream>
#include <iomanip>
using namespace std;

// declaracion de clase

class Tiempo{
	private:
		int seg;
		int min;
		int hora;
	public:
		Tiempo(int = 0, int = 0, int = 0);  // constructor
		Tiempo(long);          // otro constructor
		void mostrarTiempo();  // funcion miembro para desplegar las horas, minutos y segundos
};

// seccion de implementacion

Tiempo::Tiempo(int sss, int mmm, int hhhh){
	seg = sss;
	min = mmm;
	hora = hhhh;
}
Tiempo::Tiempo(long segundos){
	hora = segundos/3600.0;  // extrae las horas
	min = (segundos-hora*3600.0)/60.0;  // extrae los minutos
	seg = segundos-hora*3600.0-min*60.0;  // extrae los segundos
}
void Tiempo::mostrarTiempo(){
	cout << "Los segundos contienen ";
	cout << hora << " horas "
		 << min << " minutos y "
		 << seg << " segundos.";  // extrae los ultimos digitos del año
	cout << endl;
	
	return;
}

int main()
{
	Tiempo a, b(158754L), c(3700L), d(60L);  // declara tres objetos
	
	a.mostrarTiempo();
	b.mostrarTiempo();
	c.mostrarTiempo();
	d.mostrarTiempo();
	
	return 0;
}
