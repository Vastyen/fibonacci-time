// Nombre: Bastián Escribano
// Rut: 20.202.091-7
// Carrera: Ingeniería de Ejecución en Computación e Informática
// Asignatura: Análisis de Algoritmos y Estructura de Datos
// Sección: C-3 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función calcula un número de la sucesión de Fibonacci de forma recursiva.
// Tipo de Recursión: Cola.
// Entrada: Número Fibonacci a calcular.
// Salida: Número Fibonacci.
int fibRecursivo(int num){
	if (num == 0){
        return 0;}
	if (num == 1){
        return 1;}
	else{
		return fibRecursivo(num-1)+fibRecursivo(num-2);
	}
}
// Función calcula un número de la sucesión de Fibonacci de forma iterativa.
// Entrada: Número Fibonacci a calcular.
// Salida: Número Fibonacci.
int fibIterativo(int num){
	int a = 0;
	int b = 1;
	int c = 0;
	for (int i = 0; i<num-1; i++){
		c = a + b;
		a = b;
		b = c;}
	return c;	
}

int main(int argc, char *argv[]){
	time_t tiniIt, tfinIt, tiniRe, tfinRe;
	clock_t ciniIt, cfinIt, ciniRe, cfinRe;
	int num;
	int resultRecursivo;
	int resultIterativo;

	num = atoi(argv[1]);

	ciniRe = clock(); // Inicio de Tiempo para el Algoritmo Recursivo
	resultRecursivo = fibRecursivo(num);
	cfinRe = clock(); // Fin de Tiempo para el Algoritmo Recursivo
	printf("Tiempo Recursivo de Cola:  %f\n", (double)(cfinRe - ciniRe) / CLOCKS_PER_SEC);

	ciniIt = clock(); // Inicio de Tiempo para el Algoritmo Iterativo
	resultIterativo = fibIterativo(num);
	cfinIt = clock(); // Fin de Tiempo para el Algoritmo Recursivo
	printf("Tiempo Iterativo:  %f\n", (double)(cfinIt - ciniIt) / CLOCKS_PER_SEC);
	
	return 0;
}
