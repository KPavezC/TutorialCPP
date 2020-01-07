//Ejercicios de expresiones owo

#include<iostream>

using namespace std;

int main(){
	
	//escribir expresión de fracción + 1
	
	float a = 0;
	float b = 0;
	float resultado = 0;
	
	cout<<"Ingrese variable A:"; cin>>a;
	cout<<"\nIngrese variable B:"; cin>>b;
	
	resultado = ((a/b)+1);
	
	cout<<"\nEl resultado es: "<<resultado;
	cout.precision(2); // para redondear el resultado; como dice el nombre, es la precisión
	cout<<"\nEl resultado redondeado es: "<<resultado;
	
	return 0;
}
