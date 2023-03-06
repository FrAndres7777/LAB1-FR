#include<iostream>
using namespace std;

int main(){
	int Numero=0,contador2=0,pedido;
	cout<<"ingrese numero de factores del primer numero triangular con k factores +1 ";
	cin>> pedido;
	bool fake = true;
	for(int i=0,i2=1;fake;++i2){
		i=i+i2;
		contador2=1;
		for(int fact=1;fact<i;fact++){
			if(i%fact==0){contador2++;
			}
		}
		if(contador2>=pedido+1){
			fake = false;
			cout <<i<<" es el primer numero triangular con "<<pedido+1 <<" factores o mas  tiene "<<contador2;
		}
				
		}		
			
}
	
	
	
