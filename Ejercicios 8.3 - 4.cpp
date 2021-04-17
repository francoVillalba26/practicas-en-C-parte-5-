#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	string nombre_archivo = "precios.dat";   // pone al frente el nombre del archivo
	string descrip;
	string precio;
	
	ifstream archivo_entr;
	
	try  //este bloque trata de abrir el archivo, leerlo y deplegar los datos del archivo
	{
		archivo_entr.open(nombre_archivo.c_str());
		
		if(archivo_entr.fail()) throw nombre_archivo;   // esta es la excepcion que se esta comprobando
		
		// lee y despliega el contenido del archivo
		archivo_entr >> descrip >> precio;
		
		while(archivo_entr.good()){   // comprueba el siguiente caracter
			cout << descrip << ' ' << precio << endl;
			archivo_entr >> descrip >> precio;
		}
		archivo_entr.close();
		
		return 0;
	}
    
    catch(string e){
    	cout << "\nEl archivo " << e << " no se abrio con exito"
    	     << "\n Por favor compruebe que el archivo existe en realidad."
    	     << endl;
    	exit(1);
	}
}
