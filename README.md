# Uso de arreglos en el lenguaje de programacion C++

Un importante tópico de la [estructura de datos](https://es.wikipedia.org/wiki/Estructura_de_datos) son los arreglos, los cuales consisten en datos relacionados del mismo tipo.
Los arreglos son entidades estáticas que mantienen el mismo tamaño con el cual fueron definidos, a lo largo de la ejecución el programa.

Un arreglo es una coleccion de variables del mismo tipo, almacenadas en localidades consecutivas de memoria, que se referencia a través de un nombre común a todas ellas. La dirección de memoria mas baja corresponde al primer elemento del arreglo, mientras la dirección mas alta corresponde al último elemento.

Para hacer referencia a un elemento particular del arreglo, se especifica el nombre del arreglo y el número de la posición relativa ocupada por el elemento en el arreglo entre corchetes [].

Para declarar un arreglo de enteros llamado c de 12 elementos se usa la siguiente instrucción

```cpp
int c[12];
```

para asignar los valores iniciales de un arreglo se puede proceder de una de las dos formas indicadas a continuación:

Se puede definir un arreglo inicializando sus valores, indicados entre llaves

```cpp
int c1[tamanoArreglo] = {0, 3, 4, 5, 10, 7, 12, 9, 11, 3, 2, 1};
```

Si el tamaño del arreglo no se indica, al declarar un arreglo con la lista de inicialización, el número de elementos del arreglo será el número de elementos en dicha lista.

```cpp
int c2[] = {3, 5, 6, 2, 9, 6, 4, 9, 2, 6, 4, 8};
```

Los valores de un arreglo también se pueden inicializar mediante un ciclo for, de la siguiente manera:

```cpp
const int tamanoArreglo = 12;
int c3[tamanoArreglo];
for (int i= 0; i < tamanoArreglo; i++)
	c3[i] = (i * 3) + 2;
```

Definiendo el tamaño del arreglo a través de una constante, hace el programa más escalable, al momento de modificar el número de elementos  no hace falta buscar todas las sentencias que hacen uso de dicho arreglo, solo hace falta modificar el valor de la constante que define su tamaño.

El primer elemento de un arreglo está indicado por el índice cero (0).
c[0];

El cuarto elemento del arreglo se identifica de la siguiente manera
c[3];

El último elemento del arreglo se identifica
c[número de elementos - 1];

# Algoritmo que declara e inicializa un arreglo de enteros:

Se incluyen las librerías necesarias

```cpp
#include <iostream>
/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/

/*Directiva usada para indicar que se van a usar las funciones de salida de datos por pantalla y 
entrada de datos por teclado*/
using std::cout;
using std::cin;
using std::endl;
```

```cpp
int main(){		// Inicio de la funcion principal
```
Se declara una constante que indica el tamaño de los arreglos para la escalabilidad del codigo
Cuando se requiera modificar el tamaño del arreglo solo se debe modificar el valor de la constante

```cpp
const int tamanoArreglo = 12;
```

Se declaran arreglos de enteros de las diferentes formas posibles:

```cpp
// Se declara e inicializa el arreglo indicando el tamaño del mismo
	int c1[tamanoArreglo] = {0, 3, 4, 5, 10, 7, 12, 9, 11, 3, 2, 1};

// Se declara e inicializa el arreglo sin dinciar el tamaño
	int c2[] = {3, 5, 6, 2, 9, 6, 4, 9, 2, 6, 4, 8};

// Se declara el arreglo y se asignan posteriormente los valores a cada variable
	int c3[tamanoArreglo];

// Inicializacion del arreglo c3 con la asignacion de valores a cada variable del arreglo individualmente
	for (int i= 0; i < tamanoArreglo; i++)
		c3[i] = (i * 3) + 2;
```

# Paso de arreglos a funciones

En vista que se repite el procedimiento para mostrar los valores de los arreglos en pantalla, se procedió a estructurar el código, definiendo una funcion que recibe como parámetro el arreglo a mostrar y el tamaño del mismo.

En el lenguaje de programacion C no se puede pasar como parámetro a una funcion un arreglo completo. Para pasar un arreglo como parámetro a una función, se pasa un puntero a un arreglo, especificado por el nombre del arreglo sin indice

```cpp
mostrarArreglo(c1, tamanoArreglo);
```

La funcion recibe como parametro un apuntador al primer elemento del arreglo y que se encarga de mostrar en pantalla los valores del arreglo recibido como parametro

```cpp
void mostrarArreglo(int c[], int t){
	cout << "Valores \n" << endl;
	for (int i = 0; i < t; i++)
		cout << "\t Valor" << "\t" << c[i] << "\n";
}
```

# Referencias

Schildt, H. (1995). C++. Manual de referencia. Serie McGraw-Hill de informática.

Lista de reproduccion de estructuras de datos con C++

https://www.youtube.com/playlist?list=PLCZKC1YTwC0kAOKcri-_8WBdIkP5FtGC_

Deitel y Deitel. Cómo programar C++. Sexta edición

https://drive.google.com/open?id=1yWPwF7v5D2_9G9QRtwKMFubM9iE5g-cq
