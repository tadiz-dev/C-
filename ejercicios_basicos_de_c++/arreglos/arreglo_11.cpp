#include <iostream>

using namespace std;

int main()//INGRESO, SUMA Y PROMEDIO DE DATOS
{
    int datos[5];
    
    for(int x=0; x<5; x++)
    {
        cout<<"INGRESA UN NUMERO : "; cin>>datos[x];
    }
    
    int mayor = datos[0];
    int menor = datos[0];
    int suma = 0;
    float promedio = 0;
    int cont = 0;
    
    for(int y=0; y<5; y++)
    {
        if(datos[y] > mayor)
        {
            mayor = datos[y];
        }
        
        if(datos[y] < menor)
        {
            menor = datos[y];
        }
        
        suma += datos[y];
    }
    
    promedio = suma / 5;
    
    for(int z=0; z<5; z++)
    {
        if(datos[z] > promedio)
        {
            cont++;
        }
    }
    
    cout<<endl;
    cout<<"LA SUMA DEL ARREGLO ES => "<<suma<<endl;
    cout<<"EL NUMERO MAYOR DEL ARREGLO ES => "<<mayor<<endl;
    cout<<"EL NUMERO MENOR DEL ARREGLO ES => "<<menor<<endl;
    cout<<"EL PROMEDIO DEL ARREGLO ES => "<<promedio<<endl;
    cout<<"LOS NUMEROS MAYORES AL PROMEDIO FUERON => "<<cont<<endl;
    
    
    
    return 0;
}
