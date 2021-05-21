/*Ejercicio 2: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    char sexo[20]; //Va a teber 20 caracter
    float altura;

    //Edad
    cout << "Digame cual es su edad: ";
    cin >> edad; // introduzca la edad

    //Sexo
    cout<<"Introduzca su sexo: ";
    cin >> sexo; // introduzca su sexo

    //Altura
    cout<<"Introduzca su altura en metro: ";
    cin >> altura; // introduzca su altura

    cout<<"\n Edad: " <<edad;
    cout<<"\n Sexo: " <<sexo;
    cout<<"\n Altura: " <<altura;

    return 0;
}