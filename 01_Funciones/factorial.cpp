//Funcion factorial
#include <iostream>
using namespace std;

int factorial(int);

int main(){
	int num;
	cout << "Digite un numero: "<<endl; cin >> num;
	cout << "El factorial de: "<<num<<" es: "<<factorial(num); 
return 0;
}

int factorial(int x){
	if (x==0){
		return 1;
	}else{
		return x * factorial(x-1);
	}
}