#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
// Emmanuel Alejandro Sandoval Vasquez SV100220
using namespace std;

int main(){

int movJug;
cout << "Jugemos a piedra, papel o tijeras, selecciona tu movimiento \n";
cout << "1. piedra \n 2. papel \n  3. tijeras";
cin >> movJug;


 srand(time(0));
 string movComp;
 int numMov = rand() % 3+ 1;
 
 switch(numMov){
 	case 1:
 		movComp = "Piedra";
 		break;
    case 2:
  		movComp = "Piedra";
		break;   		
    case 3:
 		movComp = "Piedra";	
 		break;
 }
    cout << "La computdora escogio:  " << movComp << endl;
    
    if (movJug == numMov){
    	cout << "Empate \n";
	}else if ( (movJug == 1) && (numMov == 3)){
		cout << "Ganaste \n";
	}else if ( (movJug == 2) && (numMov == 1)){
		cout << "Ganaste \n";
	}else if ( (movJug == 3) && (numMov == 2)){
		cout << "Ganaste \n";
	}else if ( (movJug == 1) && (numMov == 3)){
		cout << "Ganaste \n";
	} else {
		cout << "Perdiste \n";
	}
	return 0;

}
