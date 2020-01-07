//segundo ejercicio de expresiones aritméticas
#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,resultado = 0;
	
	cout<<"Ingrese variable A: "; cin>>a;
	cout<<"\nIngrese variable B: "; cin>>b;
	cout<<"\nIngrese variable C: "; cin>>c;
	cout<<"\nIngrese variable D: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"\nEl resultado de la expresion es: " <<resultado;
				
	return 0;
}
