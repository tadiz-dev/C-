#include <iostream>

using namespace std;


int main()//INGRESO Y MUESTRA DE DATOS
{
    int datos[5];
    int x = 0;
    
    while(x<5)
    {
        cout<<"INGRESA UN NUMERO EN LA POSICION => "<<x<<" | ";
        cin>>datos[x];
        x++;
    }
    
    cout<<endl;
    cout<<"LOS DATOS INGRESADOS FUERON..."<<endl;
    
    int y = 0;
    
    while(y<5)
    {
        cout<<datos[y]<<" | ";
        y++;
    }

    return 0;
}
