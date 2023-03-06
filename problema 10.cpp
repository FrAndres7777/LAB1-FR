#include <iostream>
#include <cmath>
using namespace std;
// funcion para comprobar si un  numero es primo
bool esPrimo(int numeroprimo){	
	int limite = sqrt(numeroprimo);
	for (int i = 3; i <= limite; i += 2) {
		if (numeroprimo % i == 0) {return false;
    }
  }return true;
}
int main(){
	int Numero,contador= 1;
	cout << "ingrese cual numero primo quiere encontrar"<<endl;
    cin>> Numero;
	// ciclo en el cual buscamos los numeros primos  sumamos en contador hasta llegar al numero pedido 
	for(int numeroprimo=3;contador<Numero;numeroprimo+=2){
	// utilizamos la funciom para comprobar si es prime en caso true agregamos uno al contador
	if (esPrimo(numeroprimo)) {contador++;
    if (contador==Numero){
    	cout<<"El Numero Primo Numero  "<<Numero << " Es "<<numeroprimo;
	}
  } 		
}// si el numero pedido es 1 primo entonses es el numero 2 y no dentra al ciclo anterior ya que este es el unico numero par primo 
if(Numero==1){cout<<"El numero primo numero 1 Es  2";
}
}