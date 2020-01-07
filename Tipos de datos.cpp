//tipos de datos en C++
#include <iostream>

using namespace std;

int main(){
    int entero = 15; //esto es una variable, usando el operador de asignación (que le da el valor 15)
    float flotante = 10.45; // con decimales
    double mayor = 16.3456; // el double acepta valores más grandes que puede aceptar el float
    char caracter = 'W'; // con comillas simples se le asigna valores a variables de tipo Char
    bool verdadero = true; //booleano
    
    cout<<entero <<endl; //se imprime la variable de tipo int
    cout<<flotante <<endl; //imprime la de tipo float
	cout<<mayor <<endl;
	cout<<caracter <<endl;
	cout<<verdadero <<endl;
	return 0;
}
