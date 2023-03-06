#include <iostream>
using namespace std ;
int main() {
	int Numero1,Numero2,Numero3,n=0,acumulador=0;
	cout << " ingresa Numero1\n  ingresa Numero2\n  ingresa Numero3\n  ";
	cin >>Numero1;cin >>Numero2;cin>>Numero3;
    int arr[Numero3]={}; // Crear arreglo 
    bool acum=true;// Ciclo para ingresar los multiplos del Numero 1 al arreglo
    for(int mult1=1,base=Numero1;Numero1<Numero3;++mult1,Numero1=base*mult1){
    	arr[n++]=Numero1;
	}// Ciclo para ingresar los multiplos del Numero 2 al arreglo
	for(int mult2=1,base=Numero2;Numero2<Numero3;++mult2,Numero2=base*mult2){
		acum=true;// Ciclo para comprobar si el multiplo ya esta en el arreglo
		for(int i=0;i<n;i++){
			if(arr[i]==Numero2){
				acum=false;	// si el numero ya esta nos retorna falso para no agregarlo
			}
		}	
		if(acum){// lo agrega al arreglo encaso de que en el ciclo que combrobamos si el arreglo lo contiene nos da el comprobante acum es true
			arr[n++]=Numero2;
		}
	}// se imprime el arreglo
	for(int i2= 0; i2 < n;acumulador+=arr[i2],i2++) {
        cout << arr[i2];
        if(i2<n)cout<<"+";
        else cout << " = "; 
    }
     cout<<arr[n]<<" = "<<acumulador;
    return 0;
}
