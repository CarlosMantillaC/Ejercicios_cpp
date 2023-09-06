#include <iostream>

using namespace std;

int main(){

    float libras = 0;
    float kilos = 0;
    float gramos = 0;

    cout<<"Ingrese un peso en libras: ";
    cin>>libras;
    kilos = libras / 2.205;
    gramos = libras * 453.6;

    cout<<"El peso de libras a kilogramos es: "<<kilos<<" kilos"<<endl;
    cout<<"El peso de libras a gramnos es: "<<gramos<<" gramos";

    return 0;
}