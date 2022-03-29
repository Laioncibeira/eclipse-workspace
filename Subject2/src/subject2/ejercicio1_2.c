/*
 * ejercicio1_2.c
 *
 *  Created on: 28 mar. 2022
 *      Author: laion
 *
 *  Request: ingresar 3 números y mostrar cuál de los tres es el mayor.
 *
 *  Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”
 */

#include <stdio_ext.h>
#include <stdlib.h>

int main(void)
{
	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;
	int greaterNumber = 0;

	printf("++++++Mayor de tres numeros+++++\n\n·Ingrese un numero: ");

	scanf("%d",&numberOne);

	greaterNumber = numberOne;

	printf("Ingrese otro numero: ");

	scanf("%d",&numberTwo);

	if (numberTwo > greaterNumber) {

		greaterNumber = numberTwo;
	}

	printf("Ingrese otro numero: ");

	scanf("%d",&numberThree);

	if (numberThree > greaterNumber) {

		greaterNumber = numberThree;
	}

	printf("El mayor de los numeros ingresados es: %d",greaterNumber);

}

