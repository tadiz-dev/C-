#include <iostream>

using namespace std;

int arreglo[5];

int main()
{
    for(int x=0; x<5; x++) //ALMACENAMIENTO DE NUMEROS
    {
        cout<<"INGRESA UN NUMERO : ";
        cin>>arreglo[x];
    }
    
    for(int y=0; y<5; y++) //MUESTRA LOS NUMEROS
    {
        cout<<arreglo[y]<<" | ";
    }
    
    return 0;
}
