#include <iostream>

using namespace std;

int main()//CONTEO Y SUMA DE NUMEROS PARES
{
    int datos[7];
    int cont = 0;
    int suma = 0;
    
    for(int x=0; x<7; x++)
    {
        cout<<"INGRESA UN NUMERO : ";
        cin>>datos[x];
    }
    
    cout<<endl<<endl;
    cout<<"LOS NUMEROS PARES INGRESADOS FUERON LOS SIGUIENTES..."<<endl;
    
    for(int y=0; y<7; y++)
    {
        if(datos[y] % 2 == 0)
        {
            cout<<datos[y]<<" | ";
            cont++;
            suma += datos[y];
        }
    }
    
    cout<<endl<<endl;
    cout<<"SE ENCONTRARON | "<<cont<<" | NUMEROS PARES"<<endl;
    cout<<"Y LA SUMA TOTAL DE ELLOS ES | "<<suma<<" |"<<endl;
    

    return 0;
}
