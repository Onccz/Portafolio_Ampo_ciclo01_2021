#ifndef CIRCULO
#define CIRCULO


#include<cmath>

const double PI = 3.14159265;

// Especificacion
class Circulo{
	private:
		double radio;
    public:
    	Circulo(double r);
    	double getRadio();
    	double calcularArea();
    	double calcularDiametro();
    	double calcularPerimetro();
    	
};


// implementacion del constructor
Circulo::Circulo(double r){
	this->radio = r;
}

// implementacion de los metodos
double Circulo::getRadio(){
	return this->radio;
}

double Circulo::calcularArea(){
	return PI * pow(this->radio, 2);
}

double Circulo::calcularDiametro(){
	return 2 * this->radio;
}

double Circulo::calcularPerimetro(){
	return 2 * PI * this->radio;
}
#endif
