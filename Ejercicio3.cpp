/*Se dispone de un archivo indexado  denominado , que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.*/

#define MAXREGISTRY 10
#define MAXCHAR 50

typedef struct empeladodata{
    int DNI[MAXCHAR];
    char nombre[MAXCHAR];
    char apellido [MAXCHAR];
    float salario  [MAXCHAR];
    int cargo[MAXCHAR];
} ;