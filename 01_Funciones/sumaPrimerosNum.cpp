//sumaPrimerosNum.cpp
#include <iostream>

using namespace std;
int sumaPrimerosNum(int);

int main(){
	int num;
	cout << "Digite la cantidad de primeros numeros a sumar: "; cin >>num;
	cout << "La suma es: "<<sumaPrimerosNum(num);
	return 0;
}
int sumaPrimerosNum(int x){
	if(x == 1){
		return 1;
	}else{
		return x + sumaPrimerosNum(x-1);
	}	
}