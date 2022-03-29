/*
 * subject2_2.c
 *
 *  Created on: 28 mar. 2022
 *      Author: Fernando León Cibeira
 *      Division: 1F
 *
 *  Request: Ingresar 10 números enteros, distintos de cero.
 *  Mostrar:
 *  	·Cantidad de pares e impares.
 *  	·El menor número ingresado.
 *  	·De los pares el mayor número ingresado.
 *  	·Suma de los positivos.
 *  	·Producto de los negativos.
 *
 */

#include <stdio_ext.h>
#include <stdlib.h>

#define Q_NUMBERS 10

int main(void)
{
	int number = 0; //Almacena los enteros ingresados
	int qPairs = 0; //Almacena la cantidad de pares
	int qOdds = 0;  //Almacena la cantidad de impares
	int minorNumber = 0; //Almacena el menor numero de la serie
	int higherPairNumber = 0; //Almacena el mayor par
	int positiveAccumulator = 0; //Almacena la acumulacion de numeros positivos
	int productNegativeNumbers = 0; //Almacena el producto de numeros negativos

	printf("++++++Diez numeros+++++\n\n");


	for (int i = 0; i < Q_NUMBERS; ++i) {

		printf("·Ingrese un numero: ");
		scanf("%d",&number);

		if (minorNumber == 0 || number < minorNumber) { //Evalua si el numero ingresado es el menor de la serie

			minorNumber = number;	//Si lo es, lo asigna a la variable correpondiente
		}
		/*--------------------------------------------------------------------------------*/
		if (!(number % 2)) { //Evalua si es par

			qPairs ++;

			if (higherPairNumber == 0 || number > higherPairNumber) { //Evalua si el par ingresado es el mayor de la serie

				higherPairNumber = number; //Si lo es, lo asigna a la variable correspondiente
			}

		} else { //Sino, es impar

			qOdds ++;
		}
		/*--------------------------------------------------------------------------------*/
		if (number >= 0) { //Evalua si es positivo

			positiveAccumulator += number; //Acumula los numeros positivos

		} else { //Sino, es negativo

			productNegativeNumbers *= number; //Multiplica los numeros negativos

		}
		/*--------------------------------------------------------------------------------*/
	}



	printf("a) La cantidad de numeros ingresados es:\n\n·Pares: %d \n·Impares: %d \n",qPairs,qOdds);
	printf("b) El menor numero ingresado es: %d \n",minorNumber);
	printf("c) El mayor numero par ingresado es: %d \n",higherPairNumber);
	printf("d) La suma de los numeros positivos es: %d \n",positiveAccumulator);
	printf("e) El producto de los numeros negativos es: %d \n",productNegativeNumbers);

	return 0;
}

