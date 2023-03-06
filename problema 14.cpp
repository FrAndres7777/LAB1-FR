#include<iostream>
using namespace std;
bool polindromo(int num){
	int  reverso = 0, digito, original;
    original = num;
    //reutizamos del ejercicio 20 pero en este caso comprobamos si el numero es polindromo si es el caso retornamos true si no false
    while (num > 0) {
        digito = num % 10;
        reverso = (reverso * 10) + digito;
        num = num / 10;
    }
    if (original == reverso) {
        return true;
    } else {
        return false;
}
}
int main(){
	int maximo=0,n,valor1,valor2;
	// ciclo para tomar valores de 999 hasta 100 primer valor
	for(int i=999;i>100;i--){
		for(int i2=999;i2>100;i2--){// ciclo para tomar valores de 999 hasta 100 segundo valor2
			n=i*i2;
			// comprobamos si el numero encontardo es mayor al actualmente mayor pilndromo encontrado si  no es el caso no hacer operaciones inmnecesarias
			if(n>maximo){
			if(polindromo(n)){
				if(maximo<n){
					maximo=n;valor1=i;valor2=i2;
				}
			}
			}			
		}
	}
	cout<<"EL mayor numero polindromo como multiplicacion de 2 numeros de 3 digitos es\n  "<<valor1<<" * "<<valor2<<" = "<<maximo;
}