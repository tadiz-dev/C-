#include <iostream>

using namespace std;


int main()//INGRESO, BUSQUEDA Y SUMA DE DATOS
{
    int datos[5];
    int suma = 0;
    int x = 0;
    
    while(x<5)//WHILE PARA ALMACENAR LOS DATOS
    {
        cout<<"INGRESA UN NUMERO EN LA POSICION => "<<x<<" | ";
        cin>>datos[x];
        x++;
    }
    
    cout<<endl;
    cout<<"LOS DATOS INGRESADOS FUERON..."<<endl;
    
    int y = 0;
    int mayor = datos[0];
    int menor = datos[0];
    
    while(y<5)//WHILE PARA BUSCAR EL DATO MAYOR Y MENOR
    {
        if(datos[y] > mayor)
        {
            mayor = datos[y];
        }
        
        if(datos[y] < menor)
        {
            menor = datos[y];
        }
        
        y++;
    }
    
    int z = 0;
    
    while(z<5)//WHILE PARA MOSTRAR Y SUMAR LOS DATOS
    {
        cout<<datos[z]<<" | ";
        suma += datos[z];
        z++;
    }
    
    cout<<endl<<endl;
    cout<<"LA SUMA TOTAL DE LOS DATOS ES..."<<suma<<endl;
    cout<<"EL DATO MAYOR DE ARREGLO ES..."<<mayor<<endl;
    cout<<"EL DATO MENOR DEL ARREGLO ES..."<<menor<<endl;
    

    return 0;
}
