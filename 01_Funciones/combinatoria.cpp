//combinatoria
#include <iostream>
using namespace std;
int combinatoria(int,int);

int main(){
	int n, m;
	cout << "Digite los dos valores para a cominatoria: ";
	cin >> n >> m;
	cout << "La combinatoria es: "<< combinatoria(n,m);
	return 0;
}
//calculo de la combinatoria
int combinatoria(int n, int k){
	if(n == k){
		return 1;
	}else if(k == 1){
		return n;
	}else{
		return combinatoria(n-1,k-1) + combinatoria(n-1,k);
	}
}
