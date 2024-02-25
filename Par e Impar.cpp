//Numeros par e impar
#include <iostream>
using namespace std;
main(){
	//Determinar si un numero es par o impar
	int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	//Dividir un numero entre dos si su residuo es cero será par caso contrario es impar.
	if ((num%2)==0){ //par
		cout<<"El numero "<<num<<" es par."<<endl;
	} else { //impar
		cout<<"El numero "<<num<<" es impar."<<endl;
	}
	
	
	system("pause");
}
