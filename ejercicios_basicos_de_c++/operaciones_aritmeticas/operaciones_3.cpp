#include <iostream>

using namespace std;

float a,b,c,d, resultado = 0;

int main()
{
	cout<<"INGRESA EL VALOR DE A : "; cin>>a;
	cout<<"INGRESA EL VALOR DE B : "; cin>>b;
	cout<<"INGRESA EL VALOR DE C : "; cin>>c;
	cout<<"INGRESA EL VALOR DE D : "; cin>>d;
	
	resultado = (a + b) / (c + d);
	
	cout<<"EL RESULTADO DE LA OPERACION ES => "<<resultado<<endl;
	
	return 0;
}
