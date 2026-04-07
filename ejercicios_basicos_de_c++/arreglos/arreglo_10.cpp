#include <iostream>

using namespace std;

int main()//INGRESO DE DATOS E IDENTIFICAR CUAL ES EL MAYOR Y EL MENOR
{
    int datos[5];
    
    for(int x=0; x<5; x++)
    {
        cout<<"INGRESA UN NUMERO EN LA POSICION "<<x<<" | "; cin>>datos[x];
    }
    
    int mayor = datos[0];
    int menor = datos[0];
    
    for(int y=1; y<5; y++)
    {
        if(datos[y] > mayor)
        {
          mayor = datos[y];
        }
        
        if(datos[y] < menor)
        {
            menor= datos[y];
        }
    }
    cout<<endl;
    cout<<"EL NUMERO MAYOR DEL ARREGLO ES => "<<mayor<<endl;
    cout<<"EL NUMERO MENOR DEL ARREGLO ES => "<<menor<<endl;
    
    
    return 0;
}
