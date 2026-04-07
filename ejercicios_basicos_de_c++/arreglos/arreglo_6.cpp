#include <iostream>

using namespace std;

int arreglo[5]={4,7,2,9,3}; //BUSCA EL DATO MENOR DEL ARREGLO
int menor = arreglo[0];

int main()
{
    for(int x=1; x<5; x++)
    {
        if(arreglo[x] < menor)
        {
            menor = arreglo[x];
        }
    }
    
    cout<<"EL DATO MENOR DEL ARREGLO ES "<<menor;
    
    return 0;
}
