#include <iostream>
#include <iomanip>
using namespace std;

// declaracion de clase

class Student{
	private:
		int iden;
		double calif[5];
		int total;
	public:
		Student(int = 0, double = 0, int = 0);  // constructor
		void numIdent(int);  
		void califPrueba(double);
		void califProm();
};

// seccion de implementacion

Student::Student(int ii, double cc, int tt){
	iden = ii;
	for(int i = 0; i < 5; i++){
		calif[i] = cc;
	}
	total = tt;
}
void Student::numIdent(int ii){
	iden = ii;
}
void Student::califPrueba(double num){
	if(total<5){
		calif[total] = num;
		total++;
	}
	else{
		cout << "\nYa se han ingresado 5 calificaciones." << endl;
	}
}
void Student::califProm(){
	double suma = 0;
	double prom;
	for(int i=0; i<total; i++){
		suma = suma + calif[i];
	}
	prom = suma/total;
	
	cout << "Identificacion: " << iden << endl;
	cout << "Calificacion promedio: " << setprecision(2) << prom << endl;
	
	return;
}

int main()
{
	Student a, b, c;
	
	a.numIdent(1111);
	a.califPrueba(6);
	a.califPrueba(7);
	a.califPrueba(8);
	
	a.califProm();
	c.califProm();
	
	return 0;
}
