//Operadores logicos
#include <iostream>
using namespace std;
main(){
	//and (y) &&
	// or (o) ||
	
	char lapiz, lapicero, cuaderno;
	cout<<"Trae lapiz? (s/n): ";
	cin>>lapiz;
	cout<<"Trae lapicero? (s/n): ";
	cin>>lapicero;
	cout<<"Trae cuaderno? (s/n): ";
	cin>>cuaderno;
	
	/*Puede entrar a clase si usted trae un lapiz y un lapicero
	and (y) = el valor es verdadero si ambas son verdaderas.
	Puede entrar a clase si usted trae un lapiz o un lapicero
	or (o) = el valor es verdadero si por lo menos una es verdadera.
	
	Puede entrar a clase si usted trae un lapiz o un lapicero y un cuaderno.*/
	
	if ((lapiz=='s' || lapicero=='s') && cuaderno=='s'){
		cout<<"Usted puede INGRESAR."<<endl;
	} else {
		cout<<"Lo siento NO puede INGRESAR."<<endl;
	}

system("pause");
	
}
