#ifndef RECTANGULO
#define RECTANGULO


class Rectangulo{
	private:
		double base;
		double altura;
	
	public:
		Rectangulo(double b, double h );
		double calcularArea();
		double calcularPerimetro();
		double getBase();
		double getAltura();
		
};


// Implementacion de metodos
Rectangulo::Rectangulo(double b, double h){
	this->base = b;
	this->altura = h;
	
}
// Calcular el area de un Rectangulo

double Rectangulo::calcularArea(){
	return this->base * this->altura;
}

// Calcular el area de un reectangulo
double Rectangulo::calcularPerimetro(){
	return 2 * (this->base * this->altura );
}

// Devolver la base
double Rectangulo::getBase(){
	return this->base;
}

// Devolver la altura
double Rectangulo::getAltura(){
	return this->altura;
}

#endif
