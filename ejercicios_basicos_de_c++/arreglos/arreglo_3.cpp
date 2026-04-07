#include <iostream>

using namespace std;

int arreglo[4]={3,7,9,1}; //SUMA DEL ARREGLO
int suma = 0;

int main()
{
    for(int x=0; x<4; x++)
    {
        suma += arreglo[x];
    }
    
    cout<<"LA SUMA DEL ARREGLO ES => "<<suma;
    
    return 0;
}
