#include <iostream>

using namespace std;

int main() {

    int n = 0;
    float notas[50];
    float suma = 0;

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> notas[i];
        suma += notas[i]; 
        
        }

    float promedio = suma / n;
    float equivalenciaFESC =  promedio * 0.20;

    cout << "Promedio de las notas: " << promedio << endl;
    cout << "Equivalencia del 20% de la tercera nota en la FESC: " << equivalenciaFESC << endl;

    return 0;
}
