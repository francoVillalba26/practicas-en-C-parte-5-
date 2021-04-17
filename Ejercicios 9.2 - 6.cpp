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
		void Tic();
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
void Tiempo::Tic(){
	if(seg==59){
		if(min==59){
			seg = 0;
			min = 0;
			hora++;
		}
		else{
			seg = 0;
			min++;
		}
	}
	else{
		seg++;
	}
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
	Tiempo a(59,59,1), b(59,35,1), c(35,47,1);  // declara tres objetos
	
	a.mostrarTiempo();
	b.mostrarTiempo();
	c.mostrarTiempo();
	
	cout << endl;
	a.Tic();
	b.Tic();
	c.Tic();
	a.mostrarTiempo();
	b.mostrarTiempo();
	c.mostrarTiempo();
	
	return 0;
}
