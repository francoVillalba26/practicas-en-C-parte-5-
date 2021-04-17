#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

class Persona
{
	public:
		Persona();
		int llegada();
		int galones();
};

Persona::Persona()
{
	srand(time(NULL));
}
Persona::llegada()
{
	return 1 + (rand() % 15);
}
Persona::galones()
{
	return 3 + (rand()%(20+1-3));
}

int main()
{
	Persona a, b, c;
	
	cout << "El numero de personas que llegaron a 'a' es: " << a.llegada() << endl
		 << "El numero de personas que llegaron a 'b' es: " << b.llegada() << endl
		 << "El numero de personas que llegaron a 'c' es: " << c.llegada() << endl
		 << endl;
	
	cout << "El numero de galones que consumieron las personas en 'a' es: " << a.galones() << endl
		 << "El numero de galones que consumieron las personas en 'b' es: " << b.galones() << endl
		 << "El numero de galones que consumieron las personas en 'c' es: " << c.galones() << endl
		 << endl;
	
	return 0;
}
