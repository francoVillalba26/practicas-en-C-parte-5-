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
	int grupo, i, num;
	float suma = 0;
	float prom;
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
		archivo_entr >> grupo;
		for(i=0; i<grupo; i++){
			archivo_entr >> num;
			suma = suma + num;
		}
		prom = suma/grupo;
		
		cout << "El grupo consta de " << grupo << " numeros y el promedio es: " 
		     << fixed << setprecision(2) << prom << endl;
		suma=0;
	}
	
	archivo_entr.close();
	
	return 0;
}
