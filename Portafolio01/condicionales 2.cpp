#include <iostream>
using namespace std;
// Emmanuel Alejandro Sandoval Vasquez SV100220
int  main(){
	
	
	double nota;
	cout << "Ingresa la nota que obtuviste en el examen: ";
	cin >> nota;
	string resultado;
	
	resultado = ( nota >=6) ? "aprobo" : "reprobo";
	cout << "usted " << resultado << "el examen. " << endl;
	
	resultado = (nota == 0) ? "no tiene nota en":((nota >= 6) ? "Aprobp" : "reprobo");
	cout << "usted " << resultado << "el examen. " << endl;
	
	return 0;
	
}

