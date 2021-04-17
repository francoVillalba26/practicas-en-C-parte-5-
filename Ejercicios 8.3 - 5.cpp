#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	char respuesta;
	string nombre_archivo = "precios.dat";
	ifstream archivo_entr;
	ofstream archivo_sal;
	
	try
	{
		archivo_entr.open(nombre_archivo.c_str());
		if (archivo_entr.fail()) throw 1;   // esto significa que el archivo no existe
			// solo llega aqui si se encontro el archivo
			// de lo contrario el bloque catch toma el control
		
		cout << "Un archivo con el nombre " << nombre_archivo << " existe actualmente.\n"
			 << "Desea sobrescribirlo con los datos nuevos (si o no): ";
		cin >> respuesta;
		if(tolower(respuesta) == 'no')
		{
			archivo_entr.close();
			cout << "El archivo existente no se ha sobrescrito." << endl;
			exit(1);
		}
	}
	catch(int e) {};  // un bloque para no hacer nada que permita
	                  // que continue el procesamiento
	try
	{
		// abre el archivo en modo de escritura y continua con la escritura del archivo
		archivo_sal.open(nombre_archivo.c_str());
		if (archivo_sal.fail()) throw nombre_archivo;
		// establece los formatos del flujo de archivo de salida
		archivo_sal << setiosflags(ios::fixed)
					<< setiosflags(ios::showpoint)
					<< setprecision(2);
		// escribe los datos en el archivo
		archivo_sal << "Alfombras " << 39.95 << endl
					<< "Bombillas " << 3.22 << endl
					<< "Fusibles " << 1.08 << endl;
		archivo_sal.close();
		cout << "El archivo " << nombre_archivo
			 << " se ha escrito con exito." << endl;
		
		return 0;
	}
	catch(string e)
	{
		cout << "El archivo " << nombre_archivo
			 << " no se abrio para salida y no se ha escrito."
			 << endl;
	}
}
