/*
Utilizar las sentencias para procesamiento de archivos, que permitan leer y
almacenar la información de manera persistente en el disco duro, utilizando el lenguaje
de programación C.
Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos:
Nombre
Edad
Dirrecion
Ciudad
Telefono
*/

#include <iostream>
using namespace std;


int main(){
    int op, i = 0;  
    do {
        system ("cls || clear");
char nombres [60];
    char apellidos [60];
    int edad;
    char direccion [100];
    char ciudad [60];
    char telefono [10];

    printf("Ingrese sus 2 nombres:\n");
    scanf(" %[^\n]", nombres);

    cout << "Ingrese sus 2 apellidos:\n";
    scanf(" %[^\n]", apellidos);

    cout << "Ingrese la edad:\n";
    cin >> edad;

    cout << "Ingrese su direccion:\n";
    scanf(" %[^\n]", direccion);

    cout << "Ingrese su ciudad:\n";
    scanf(" %[^\n]", ciudad);

    cout << "Ingrese su numero celular:\n";
    scanf(" %[^\n]", telefono);




    cout << "Datos ingresados: " << endl;
    cout << "Nombre: " << nombres << apellidos << endl;
    cout << "Edad: " << edad << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "Telefono: " << telefono << endl;

    printf("Desea ingresar otro registro \n 1. Si \n 0. No\n");
    cin >> op;
    i++; 

} while (op!=0);
    return 0;
}
