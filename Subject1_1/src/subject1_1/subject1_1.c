/*
 * subject1_1.c
 *
 *  Created on: 28 mar. 2022
 *      Author: Fernando León Cibeira
 *      Division: 1F
 *
 *  Request: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 *
	Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”

 */

#include <stdio_ext.h>
#include <stdlib.h>

int main(void)
{
	int numberOne = 0;
	int numberTwo = 0;
	int sum = 0;

	printf("Suma de dos numeros:\n·Ingrese un numero: ");

	scanf("%d",&numberOne);

	printf("Ingrese otro numero: ");

	scanf("%d",&numberTwo);

	sum = numberOne + numberTwo;

	printf("La suma entre %d y %d da como resultado %d",numberOne,numberTwo,sum);

	return 0;
}

