/*Un programa simple en C++ para declarar, inicializar y visualizar un arreglo
realizado con la finalidad de mostrar el esquema basico de un programa en lenguaje C++
Se declaran los arreglos de las tres maneras posibles:
	Declaracion explicita indicando el tamaño del arreglo
	Declaracion explicita sin idicar el tamaño del arreglo
	Inicializacion de cada variable de manera individual*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp*/

#include <iostream>
/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/

/*Directiva usada para indicar que se van a usar las funciones de salida de datos por pantalla y 
entrada de datos por teclado*/
using std::cout;
using std::cin;
using std::endl;

int main(){		// Inicio de la funcion principal
	
// Se declara una constante que indica el tamaño de los arreglos para la escalabilidad del codigo
// Cuando se requiera modificar el tamaño del arreglo solo se debe modificar el valor de la constante
	const int tamanoArreglo = 12;

// Se declara e inicializa el arreglo indicando el tamaño del mismo
	int c1[tamanoArreglo] = {0, 3, 4, 5, 10, 7, 12, 9, 11, 3, 2, 1};

// Se declara e inicializa el arreglo sin dinciar el tamaño
	int c2[] = {3, 5, 6, 2, 9, 6, 4, 9, 2, 6, 4, 8};

// Se declara el arreglo y se asignan posteriormente los valores a cada variable
	int c3[tamanoArreglo];

// Inicializacion del arreglo c3 con la asignacion de valores a cada variable del arreglo individualmente
	for (int i= 0; i < tamanoArreglo; i++)
		c3[i] = (i * 3) + 2;
		
// Mostrar en pantalla los valores del arreglo c1
	std::cout << "Valores de c1\n" << std::endl;
	for (int i = 0; i < tamanoArreglo; i++)
		std::cout << "\t Valor" << "\t" << c1[i] << "\n";

// Mostrar en pantalla los valores del arreglo c2
	std::cout << "Valores de c2\n" << std::endl;
	for (int i = 0; i < tamanoArreglo; i++)
		std::cout << "\t Valor" << "\t" << c2[i] << "\n";

// Mostrar en pantalla los valores del arreglo c3
	std::cout << "Valores de c3\n" << std::endl;
	for (int i = 0; i < tamanoArreglo; i++)
		std::cout << "\t Valor" << "\t" << c3[i] << "\n";

	return 0; 	// Indica que el programa temino satisfactoriamente
}				// Fin de la funcion principal
