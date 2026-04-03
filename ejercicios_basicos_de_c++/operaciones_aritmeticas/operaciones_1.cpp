#include <iostream>

using namespace std;

int n1, n2, suma = 0, resta = 0, mult = 0, division = 0; //OPERACIONES ARITMETICAS

int main()
{
	cout<<"INGRESA UN NUMERO : "; cin>>n1;
	cout<<"INGRESA OTRO NUMERO : "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	division = n1 / n2;
	
	cout<<"EL RESULTADO DE LA SUMA ES : "<<suma<<endl;
	cout<<"EL RESULTADO DE LA RESTA ES : "<<resta<<endl;
	cout<<"EL RESULTADO DE LA MULTIPLICACION ES : "<<mult<<endl;
	cout<<"EL RESULTADO DE LA DIVISION ES : "<<division<<endl;
	
	
	return 0;
}
