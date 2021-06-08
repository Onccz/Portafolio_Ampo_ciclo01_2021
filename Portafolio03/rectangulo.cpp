#include <iostream>

using namespace std;

class Rectangulo{
	int ancho, alto;
	public:
		Rectangulo();
		Rectangulo(int, int);
		int area() { return ancho * alto; } 
		
};


Rectangulo::Rectangulo(int x, int y){
	ancho = x;
	alto = y;
	
}

Rectangulo::Rectangulo(){
	ancho = 5;
	alto = 2;
	


}

class Circulo{
	double radio;
	public:
		Circulo(double r) { radio = r;	}
		double circuferencial(){return 2*radio*3.14159265;}
};

int main(){
     	Rectangulo rectangulo1(3,4);
		Rectangulo rectangulo2(5,6);
		Rectangulo rectangulo3(7,3);
		Rectangulo rectangulo4;
		
	cout << "Area reectangulo 1: " << rectangulo1.area() << endl;
	cout << "Area reectangulo 2: " << rectangulo2.area() << endl;
	cout << "Area reectangulo 3: " << rectangulo3.area() << endl;
	cout << "Area reectangulo 4: " << rectangulo4.area() << endl;
	
	
	Circulo foo (10.0);
	Circulo bar  = 20.0;
	Circulo baz  (30.0);
	Circulo lux = 40.0;
	
    cout << "Circuenferencia de foo: " << foo.circuferencial() << endl;
    cout << "Circuenferencia de bar " << bar.circuferencial() << endl;
    cout << "Circuenferencia de baz: " << baz.circuferencial() << endl; 
    cout << "Circuenferencia de lux: " << lux.circuferencial() << endl;
    
    Rectangulo * rectanglep1, *rectanglep2, *rectanglep3;
    rectanglep1 = &rectangulo1;
    rectanglep2 = new Rectangulo(5,7);
    rectanglep3 = new Rectangulo[2]{{2,5},{3,6}};
    cout << "Area rectangulo1: " << rectangulo1.area() << endl;
    cout << "Area *rectanglep1: " << rectanglep1->area() << endl;
    cout << "Area *rectanglep2: " << rectanglep2->area() << endl;
    cout << "Area *rectanglep3[0]: " << rectanglep3[0].area() << endl;
    cout << "Area *rectanglep3[0]: " << rectanglep3[1].area() << endl;
    
    delete rectanglep2;
    delete[] rectanglep3;
    
    return 0;
}



