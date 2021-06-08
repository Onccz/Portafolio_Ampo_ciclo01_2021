#ifndef CALCULADORA_CALCULADORA_H
#define CALCULADORA_CALCULADORA_H

#include <iostream>
#include <string>

using namespace std;

const double pi = 3.141592653589793238;

double sumar (double x, double y){
	return x + y ;	
}

double restar (double x, double y){
	return x - y ;
}

double multiplicar (double x,double y){
	return x * y ;
} 

double dividir (double x,double y){
	return x / y ;
}

double solicitarnum (string quenum){
	double numero;
	cout << quenum <<": ";
while(!(cin >> numero)){
	cin.clear();
	cin.ignore (1000 , '\n');
}
return numero;
}

char solioperador(){
	char operador;
	cout << "seleccione un operado( + | - | * | / | ) ";
	while (!(cin >> operador)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout <<"operador invalido.intente de nuevo";
	}
return operador;
}
   void calculadora(){
   	double numero1, numero2 ,resultado;
   	char operador;
   	
   	cout << "Caluculadora de operaciones basicas con dos numero "<<endl;
   	cout << "por favor ingresa dos numeros"<<endl;
   	
   	numero1 = solicitarnum ("primer numero");
   	numero2 = solicitarnum ("segundo numero");
   	operador =solioperador();
   	
   	switch(operador){
   		case '+':
   			resultado = sumar (numero1,numero2 );
   			cout << resultado << endl;
   			break;
   		case '-':
   			resultado = restar(numero1,numero2);
   			cout << resultado << endl;
   			break;
   		case '*':
   		    resultado = multiplicar(numero1,numero2);
   		    cout << resultado << endl;
   		    break;
   		case '/':
   		    resultado = dividir(numero1, numero2);
   		    cout << resultado << endl;
   		    break;
   		default:
   			cout <"operador no soportado";
   			resultado = -1.0;
   			break;
	   }
	   
	cout << "El resultado es =  " << resultado << endl;
}
	   
double valorPi(){
		return pi;
}
	
	   
	#endif  //CALCULADORA_CALCULADORA_H
	
