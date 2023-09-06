#include <iostream>

using namespace std;

int main() {

    float previo1 = 0;
    float previo2 = 0;
    float nota3 = 0;
    float examenFinal = 0;
    float definitiva = 0;

    cout<<"Ingrese la nota del primer previo: ";
    cin>>previo1;
    cout<<"\n";

    cout<<"Ingrese la nota del segundo previo: ";
    cin>>previo2;
    cout<<"\n";

    cout<<"Ingrese la nota del tercer previo: ";
    cin>>nota3;
    cout<<"\n";

    cout<<"Ingrese la nota del examen final: ";
    cin>>examenFinal;
    cout<<"\n";

    definitiva = (previo1*0.25)+(previo2*0.25)+(nota3*0.20)+(examenFinal*0.30);
    cout<<"La definitiva final de la asignatura es: "<<definitiva;

    return 0;

}