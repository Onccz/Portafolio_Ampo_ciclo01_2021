#include <iostream>
#include <cstdlib>
#include <ctime>
// Emmanuel Alejandro Sandoval Vasquez SV100220
int main(){
    
    using namespace std;
    
    int magico;
    int intento;
    char respuesta;
    
    srand(time(0));
    
    magico = rand() %10 + 1;
    
    cout << "Adivina el numero magico:  ";
    cin >> intento;
    
    
    
    if (magico == intento){
    	cout << "Correcto! como lo supiste?" << endl;
	}else if (magico > intento){
		cout << "Incorrecto. El numero es mayor que " << intento << endl;
	}else {
		cout << "Incorrecto. El numero es menor que " << intento << endl;
	}
	
	cout << "Quieres saber cual era el numero? (y/n):  ";
	cin >> respuesta;
	if (respuesta == 'y'){
		cout << "El numero secreto era:  "<< magico << endl;
	}else if (respuesta == 'n'){
		cout << "Bueno, esta bien. Intentalo de nuevo" << endl;
	}
	
	return 0;
}
