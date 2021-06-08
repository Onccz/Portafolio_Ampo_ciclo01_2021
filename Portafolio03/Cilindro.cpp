#include <iostream>

using namespace std;

class Circulo{
	double radio;
	public: 
	Circulo(double r) : radio (r){}
	double area() {return radio*radio*3.1416;}
	
};

class Cilindro{
	Circulo base;
	double altura;
	public: 
	Cilindro(double r, double h):base (r),altura (h){}
	double volumen() {return base.area()* altura;}
	
};

int main(){
    Cilindro foo (10,20);
    
    cout << "Volumen del cilindro foo:  "  << foo.volumen() << endl;
    
return 0;

}
