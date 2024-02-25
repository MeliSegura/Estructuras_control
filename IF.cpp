//PROGRAMA DE NUMEROS POSITIVOS, NEGATIVOS O NEUTRO
#include <iostream>
using namespace std;
main (){
    //Numero es positivo >0, negativo <0 o neutro =0
    int num=0;
    cout<<"Ingrese el numero: ";
    cin>>num;
    
    if (num>0){ // >0
       cout<<"Positivo"<<endl;
	} else { // <=0
	        if(num==0){ // 0
	            cout<<"Neutro"<<endl;
		        } else { // <0
		               cout<<"Negativo"<<endl;
		    }
	}
}

