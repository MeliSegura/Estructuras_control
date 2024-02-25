//Promedio de notas
#include <iostream>
using namespace std;
main(){
	int n1=0, n2=0, n3=0, promedio=0;
	cout<<"Ingrese Nota 1: ";
	cin>>n1;
	cout<<"Ingrese Nota 2: ";
	cin>>n2;
	cout<<"Ingrese Nota 3: ";
	cin>>n3;
	 
	//calculo del promedio
	promedio =(n1+n2+n3)/3;
	//mostrar mensaje
	string mensaje="";
	mensaje = promedio>=61 ? "Aprobado" : "Reprobado";
	cout<<"Su promedio fue de "<<promedio<<" por lo tanto "<<mensaje<<endl;
	
	if (promedio>=0 && promedio<61){
		cout<<"Mala nota"<<endl;
	}
	if (promedio>=61 && promedio<81){
		cout<<"Buena nota"<<endl;
	}
	if (promedio>=81){
		cout<<"Excelente nota"<<endl;
	}
	system("pause");
}
