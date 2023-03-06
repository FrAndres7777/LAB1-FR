#include <iostream>
using namespace std;
int main() {
    int Numero,factor = 1;
    cout << "Ingrese un numero  acalcular";
    cin >> Numero;
    // sacamos cada factor de numero dado
    for (int i = 2; i <= Numero; i++) {
        // usamos propiedad para obtener factor primo de un numero 
		while (Numero % i == 0) {
            factor = i;
            Numero/= i;
        }
    }
    cout << "El maximo factor primo de " << Numero<< " es " << factor << endl;
    return 0;
}
