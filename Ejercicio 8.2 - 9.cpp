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
	int cantInicial, cantVend, cantMin;
	int actual, cantNec;
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
	
	while(archivo_entr.good()){
		archivo_entr >> nombre >> cantInicial >> cantVend >> cantMin;
		actual = cantInicial - cantVend;
		cantNec = cantMin - cantVend;
		
		cout << setw(9) << left << nombre
			 << left << setw(7) << actual
			 << left << cantNec;
		archivo_entr.get(aux);
		cout << aux;
	}
	
	archivo_entr.close();
	
	return 0;
}
