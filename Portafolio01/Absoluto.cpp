#include <iostream>
using namespace std;
// Emmanuel Alejandro Sandoval Vasquez SV100220
int absoluto(int var){
	if (var < 0)
	    var = -var;
	return var;    
}


double absoluto(double var){
	if (var < 0)
	    var = -var;
	return var;    
}


int main(){
	int num1 = -496;
	double numd = -1354.268;
	
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) <<endl;
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) <<endl; 
	return 0;
}
