#include<iostream>
using namespace std;
bool polindromo(int num){
	int  reverso = 0, digito, original;
    original = num;
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
	for(int i=999;i>100;i--){
		for(int i2=999;i2>100;i2--){
			n=i*i2;
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