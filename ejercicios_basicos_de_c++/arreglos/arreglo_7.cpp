#include <iostream>

using namespace std;

int arreglo[6]={8,3,15,6,2,11}; //SUMA Y BUSQUEDA DE DATOS EN EL ARREGLO
int suma = 0;
int mayor = arreglo[0];
int menor = arreglo[0];
int cont = 0;

int main()
{
    for(int x=0; x<6; x++)
    {
        suma += arreglo[x];
        
        if(arreglo[x] > mayor)
        {
            mayor = arreglo[x];
        }
        
        if(arreglo[x] < menor)
        {
            menor = arreglo[x];
        }
        
        if(arreglo[x] > 7)
        {
            cont++;
        }
    }
    
    cout<<"LA SUMA DEL ARREGLO ES => "<<suma<<endl;
    cout<<"EL NUMERO MAYOR DEL ARREGLO ES => "<<mayor<<endl;
    cout<<"EL NUMERO MENOR DEL ARREGLO ES => "<<menor<<endl;
    cout<<"LOS NUMEROS MAYORES A 7 SON => "<<cont<<endl;
    
    return 0;
}
