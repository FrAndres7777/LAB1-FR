#include <iostream>
using namespace std;
int main() {
    int variable,Numero,veces;
    int valores[] = {50000,20000, 10000, 5000, 2000, 1000,500,200,100,50};//valores de las cantidades de dinero
	cin>> Numero;
	//ciclo que itera sacando cada valor desde 50000 hasta 50 y restando la cantidad de cada cantidad
    for (int i = 0; i < 10; i++) {
        variable = valores[i];
        veces = Numero/ variable;
        Numero %= variable; 
        cout  << variable <<" : "<<veces<<endl;
    }// calculamos el residuo
    if (Numero>0){
    	cout<< "Faltante "<<Numero;
	}
    


}