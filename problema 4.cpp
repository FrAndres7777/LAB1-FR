#include <iostream>
using namespace std;
int main() {
    int Numero2,Numero,Minutos,Horas;
    cout<< "ingresa primera hora  ";cin >> Numero;cout<< "ingresa segunda hora  ";cin >> Numero2;
    //al ingresar las horas comprobamos si son correctas validacion de datos de entrada
    while(true){
    	if (Numero>=2400 or (Numero% 100) > 59 ){cout<< "ingresa primera hora valida  ";cin >> Numero;
		}
		else if (Numero2>=2400 or Numero2% 100 > 59 ){cout<< "ingresa segunda hora valida  ";cin >> Numero2;
		}else {break;
		}
	}//sacamos horas y minitus por aparte
	Horas = (Numero / 100)+(Numero2 / 100);
	Minutos = Numero % 100+Numero2 % 100;
	// para los casos de que las horas y,o los minutos superen su formato de 24 y 60 se debe hacer su respectivo ajuste
	if (Minutos>59){Minutos =Minutos -60;Horas++;       
	}if(Horas>=24){	Horas+= -24;
    }	
	cout<< Horas<<':'<<Minutos;
}