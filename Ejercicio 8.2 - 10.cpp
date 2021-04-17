#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	ifstream archivo_entr;
	string nombre_archivo;
	string nombre;
	double tarifa, pagoBruto, pagoExtra, pagoReg;
	int horas;
	double sumaBruto = 0;
	double sumaExtra = 0;
	double sumaReg = 0;
	char aux;
	
	cout << "Ingrese el nombre del archivo: ";
	cin >> nombre_archivo;
	
	archivo_entr.open(nombre_archivo.c_str());
	
	if(archivo_entr.fail()){
		cout << "\nEl archivo no se abrio con exito"
			 << "\n Por favor compruebe que el archivo existe en realidad."
			 << endl;
		exit(1);
	}
	
	cout << "\nEl contenido del archivo es: \n" << endl;
	
	cout << left << setw(14) << "Nombre"
	     << left << setw(8) << "Tarifa"
	     << left << setw(7) << "Horas"
	     << left << setw(12) << "Pago Bruto"
	     << left << setw(12) << "Pago Extra"
	     << left << "Pago regular";
	cout << "\n----------------------------------------------------------------" << endl;
	
	while(archivo_entr.good()){
		archivo_entr >> nombre >> tarifa >> horas;
		
		if(horas <= 40){
			pagoReg = horas*tarifa;
			pagoExtra = 0;
		}
		if(horas > 40){
			pagoReg = 40*tarifa;
			pagoExtra = 1.5 * (horas-40) * tarifa; 
		}
		
		pagoBruto = pagoExtra + pagoReg;
		sumaReg = sumaReg + pagoReg;
		sumaExtra = sumaExtra + pagoExtra;
		sumaBruto = sumaBruto + pagoBruto;
		
		cout << setw(14) << left << nombre
			 << left << setw(8) << fixed << setprecision(2) << tarifa
			 << left << setw(7) << horas
			 << left << setw(12) << pagoBruto
			 << left << setw(12) << pagoExtra
			 << left << pagoReg;
		archivo_entr.get(aux);
		cout << aux;
	}
	
	cout << "\nTotal pago regular: " << sumaReg << endl;
	cout << "Total pago extra: " << sumaExtra << endl;
	cout << "Total pago bruto: " << sumaBruto << endl;
	
	archivo_entr.close();
	
	return 0;
}
