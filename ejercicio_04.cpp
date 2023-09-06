#include <iostream>

using namespace std;

int main() {

    int edad = 0;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    if (edad < 18) {
        cout<<"Eres menor de edad";
    } else {
        cout<<"Eres mayor de edad";
    }

    return 0;
}