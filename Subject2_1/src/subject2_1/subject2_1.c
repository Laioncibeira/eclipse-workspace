/*
 * subject2_1.c
 *
 *  Created on: 28 mar. 2022
 *      Author: Fernando León Cibeira
 *      Division: 1F
 *
 *  Request: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 *
 */

#include <stdio_ext.h>
#include <stdlib.h>

#define Q_NUMBERS 5

int main(void)
{
	int number = 0;
	int accumulator = 0;
	int average = 0;

	printf("++++++Promedio de 5 numeros+++++\n\n");


	for (int i = 0; i < Q_NUMBERS; ++i) {

		printf("·Ingrese un numero: ");
		scanf("%d",&number);

		accumulator += number;
	}

	average = accumulator / Q_NUMBERS;

	printf("El promedio entre los numeros ingresados es: %d",average);

	return 0;
}

