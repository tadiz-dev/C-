#include <iostream>

using namespace std;

int main()//INGRESO Y SUMA DE DATOS
{
    int datos[5];
    int suma = 0;
    
    for(int x=0; x<5; x++)
    {
        cout<<"INGRESA UN NUMERO EN LA POSICION "<<x<<" | "; cin>>datos[x];
        suma += datos[x];
    }
    
    cout<<endl;
    cout<<"LOS DATOS INGRESADOS FUERON..."<<endl;
    
    for(int y=0; y<5; y++)
    {
        cout<<datos[y]<<" | ";
    }
    
    cout<<endl;
    cout<<"Y LA SUMA TOTAL DE ELLOS ES => "<<suma;
    
    
    return 0;
}
