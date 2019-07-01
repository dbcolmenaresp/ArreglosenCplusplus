# Uso de arreglos en el lenguaje de programacion C++

Un importante tópico de la estructura de datos son los arreglos, los cuales consisten en datos relacionados del mismo tipo.
Los arreglos son entidades estáticas que mantienen el mismo tamaño con el cual fueron definidos, a lo largo de la ejecución el programa.

Un arreglo es una coleccion de variables del mismo tipo, almacenadas en localidades consecutivas de memoria, que se referencia a través de un nombre común a todas ellas. La dirección de memoria mas baja corresponde al primer elemento del arreglo, mientras la dirección mas alta corresponde al último elemento.

Para hacer referencia a un elemento particular del arreglo, se especifica el nombre del arreglo y el número de la posición relativa ocupada por el elemento en el arreglo entre corchetes [].

Para declarar un arreglo de enteros llamado c de 12 elementos se usa la siguiente instrucción
int c[12];
para asignar los valores iniciales de un arreglo se puede proceder de una de las dos formas indicadas a continuación:

Se puede definir un arreglo inicializando sus valores, indicados entre llaves
int c[12] = {0,3,4,5,10,9,12,9,11,3,2,1};
Si el tamaño del arreglo no se indica, al declarar un arreglo con la lista de inicialización, el número de elementos del arreglo será el número de elementos en dicha lista.
int c[] = {0,3,4,5,10,9,12,9,11,3,2,1};

Los valores de un arreglo también se pueden inicializar mediante un ciclo for, de la siguiente manera:

int i, c[12];
for(i = 0; i < 12; i++)
    c[i] = i * 2;

El primer elemento de un arreglo está indicado por el índice cero (0).
c[0]
El cuarto elemento del arreglo se identifica de la siguiente manera
c[3]
El último elemento del arreglo se identifica
c[número de elementos - 1]

Definiendo el tamaño del arreglo a través de una constante, hace el programa más escalable, al momento de modificar el número de elementos  no hace falta buscar todas las sentencias que hacen uso de dicho arreglo, solo hace falta modificar el valor de la constante que define su tamaño.

const int tamanoArreglo = 12;
int c[tamanoArreglo] = {0,3,4,5,10,9,12,9,11,3,2,1};

# Algoritmo que declara e inicializa un arreglo de enteros:

Se incluyen las librerías necesarias
#include <iostream>

Inicio del bloque principal
int main(){

Declaración de 
    int i, c[12];
    for(i = 0; i < 12; i++)
        c[i] = i * 3;
    for(i = 0; i < 12; i++)
        cout << i << “ ” << c[i] << endl;
}
