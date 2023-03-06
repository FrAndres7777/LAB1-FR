#include <iostream>
using namespace std;
int main() {
    int Numero;
    float acum=1.0;
    cout<<"ingresa cantidad de valores aproximados ";
    cin >> Numero;
    //ciclo para las iteraciones dadas
    for(int i = 0;Numero>i;i++){	
    //calculamos cada base y vamos sumando
    	for(int base=1,base2=1,i2=0;i2<i;base+=1,i2++){
    		base2 = base2*base;
    		if (i-1 == i2){
    			acum= acum +(1.0/base2);
			}		
		}
	}cout<< acum<<endl;
}