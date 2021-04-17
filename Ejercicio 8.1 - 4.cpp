#include <iostream>
#include <fstream>
#include <cstdlib>   //necesaria para exit()
using namespace std;

int main(){
	ifstream archivo_entr;
	
	archivo_entr.open("precios.dat");   //abre el archivo con el
	                                    //nombre externo precios.dat
	if(archivo_entr.fail())   // comprueba una apertura exitosa
	{
		cout << "\nEl archivo no fue abierto con exito."
		     << "\nPor favor compruebe que el archivo existe en realidad."
		     << endl;
		exit(1);
	}
	
	cout << "\nEl archivo se ha abierto con exito para lectura."
	     << endl;
	
	//las instrucciones para leer datos de un archivo se colocaran aqui.
	
	return 0;
}
