#include <iostream>
using namespace std;
// Emmanuel Alejandro Sandoval Vasquez SV100220
int main(){
	
	
	int x;
	int y;
	
	cout << " *** Calcula operaciones aritmeticas de dos numeros *** \n";
	
	cout << "Inserte un numero:  ";
	cin >> x;
	
	cout << "Inserte el otro numero:  ";
	cin >> y;
	
	
	cout << "Suma: "<< x + y << endl;
	cout << "Resta: " << x - y << endl;
	cout << "Multiplicacion: " << x * y << endl;
	cout << "Division : " << x / y << endl;
	cout << "Residuo de division: " << x % y << endl;
	
	++x;
	++y;
	cout << "Incemento de uno: " << "x: " << x << " y:  " << y << endl;
	
	--x;
	--y;
	cout << "Incremento de uno " << "x: " << x << " y:  " << y << endl;
	
	return 0;
}
