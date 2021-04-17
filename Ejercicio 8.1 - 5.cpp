#include <iostream>
#include <fstream>
#include <cstdlib>   //necesaria para exit()
using namespace std;

int main(){
	ifstream archivo_entr;
	ofstream archivo_sal;
	
	archivo_entr.open("precios.dat");   // intenta abrir el archivo para entrada
	
	char respuesta;
	
	if(!archivo_entr.fail())  //si no falla, el archivo existe
	{
		cout << "Existe un archivo con el nombre precios.dat\n"
		     << "Desea continuar y sobrescribirlo\n"
		     << "con los datos nuevos (si o no): ";
		cin >> respuesta;
		if(tolower(respuesta)=='n')
		{
			cout << "El archivo existente no sera sobrescrito." << endl;
			exit(1);  //termina la ejecucion del programa
		}
	}
	archivo_sal.open("precios.dat");  // ahora abre el archivo para escritura
	
	if(archivo_entr.fail())  // comprobar una apertura con exito
	{
		cout << "\nEl archivo no se abrio con exito"
		     << endl;
		exit(1);
	}
	
	cout << "El archivo se ha abierto con exito para salida."
	     << endl;
	
	// las instrucciones para escribir en el archivo se colocaran aqui
	
	return 0;
}
