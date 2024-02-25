//Programa mostrando Pais
#include <iostream>
using namespace std;
main (){
	//pais mostrando texto si es Guatemala 
	string pais="";
	cout<<"Ingrese el pais: ";
	cin>>pais;
	
	if (pais=="guatemala"){ //mostrar texto
	    cout<<"Yo soy de "<<pais<<" mi pais."<<endl;
	} else{ //caso contrario
	    cout<<pais<<endl;
	}
	
	system ("pause");
}
