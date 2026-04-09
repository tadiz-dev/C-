#include <iostream>

using namespace std;

int main()//MOSTRAR CUANTOS CEROS SE INGRESARON
{
    int datos[8];
    int cont = 0;
    
    for(int x=0; x<8; x++)
    {
        cout<<"INGRESA UN NUMERO : ";
        cin>>datos[x];
        
        if(datos[x] == 0)
        {
            cont++;
        }
    }
    
    if(cont > 0)
    {
        cout<<endl;
        cout<<"SE INGRESO(ARON) | "<<cont<<" | CERO(S)"<<endl;
    }
   
    else
    {
        cout<<endl;
        cout<<"NO SE INGRESO NINGUN CERO";
    }
    
    cout<<endl<<endl;
    cout<<"LOS DATOS INGRESADOS FUERON LOS SIGUIENTES..."<<endl;
    
    for(int y=0; y<8; y++)
    {
        cout<<datos[y]<<" | ";
    }
    
   

    return 0;
}
