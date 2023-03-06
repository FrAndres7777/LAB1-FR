#include<iostream>
using namespace std ;
int main(){
	int k,Num=0,semilla=1,cont;
	cout<<"ingresa el numero k para encontra semillas desde esta";cin>>k;k=k-1;
	for(int k2=0;k>0;k--){// ciclo para sacar los valores de k las semillas
		k2=k;
		cout<<endl<<"_______"<<k2<<"_____:";
		cont=0;
		while(k2!=1){// calculamos sus semillas segun sea el caso y vamos contando numero de elementos en varible cont
			if(k2%2==1){
				k2=(k2*3)+1;
				cont++;
			}else if(k2%2==0){
				k2 /= 2;
				cont++;
			}
			cout<<"  "<<k2;
		}
		if(cont>Num){// comprobamos si el nuemro de elementos de la semillas es mayor a la semilla anterior con mas valor si es el caso actualizamos
			Num=cont;
			semilla=k;
		}
	}
	cout<<endl<<"LA SEMILA ENCONTRADA CON MAYOR ELEMNETOS FUE "<<semilla<<endl;	
}