#include <iostream>
#include <cctype>

using namespace std;

int main(){

    string temp;
    float valor = 0;
    float celsius = 0;
    float fahrenheit = 0;
    float kelvin = 0;

    cout<<"Que tipo de escala deseas ingresar el valor de temperatura: ";
    cin>>temp;

    for (char &c : temp) {
        c = tolower(c);
    }

    cout<<"Ingrese el valor de la temperatura: ";
    cin>>valor;

    switch (temp[0]) {
        
        case 'c':
            celsius = valor;
            fahrenheit = (valor * 9/5) + 32;
            kelvin = valor + 273.15;
            break;

        case 'f':
            celsius = (valor - 32) * 5/9;
            fahrenheit = valor;
            kelvin = (valor - 32) * 5/9 + 273.15;
            break;

        case 'k':
            celsius = valor - 273.15;
            fahrenheit = (valor - 273.15) * 9/5 + 32;
            kelvin = valor;

    }

    cout<<"De "<<temp<<" a celsius es: "<<celsius<<endl;
    cout<<"De "<<temp<<" a fahrenheit es: "<<fahrenheit<<endl;
    cout<<"De "<<temp<<" a kelvin es: "<<kelvin<<endl;

    return 0;
}