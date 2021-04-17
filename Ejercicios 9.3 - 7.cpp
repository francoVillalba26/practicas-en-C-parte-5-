#include <iostream>
#include <string>
using namespace std;

class Luz
{
	private:
		string color;
		bool iden = true;
	public:
		Luz();
		void cambio();
		void mostrarColor();
};

Luz::Luz()
{
	color = "Rojo";
}
void Luz::cambio()
{
	if(color == "Rojo"){
		color = "Amarillo";
		iden = true;
	}
	else if(color == "Verde")
	{
		color = "Amarillo";
		iden = false;
	}
	else if(color == "Amarillo")
	{
		if(iden==true){
			color = "Verde";
		}
		else if(iden==false){
			color = "Rojo";
		}
	}
}
void Luz::mostrarColor()
{
	string col;
	col = color;
	
	cout << col << endl;
}

int main()
{
	Luz a;
	
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	a.cambio();
	a.mostrarColor();
	
	return 0;
}
