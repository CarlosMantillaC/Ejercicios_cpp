#include <iostream>

using namespace std;

int main() {

    int B = 1;
    int A = 0;
    cout<<"Ingrese un número hasta donde quieras obtener el listado: ";
    cin>>A;


    while (B <= A) {
        cout<<B<<endl;
        B++;
    }

    return 0;
}

