//multiplica.cpp
#include <iostream>
using namespace std;
int mult(int ,int );
int main(){
	int num1,num2;
	cout << "Digite los dos numeros a suma: "<<endl; 
	cin >> num1>>num2;
	cout << "El resultado de multiplicar "<<num1<<" x "<<num2<<" es: "<<mult(num1,num2);
	return 0;
}
int mult(int n,int m){
	if(m == 0){
		return 0;
	}else{
		return n + mult(n,m-1);
	}
}