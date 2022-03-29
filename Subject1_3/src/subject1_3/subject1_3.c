/*
 * subject1_3.c
 *
 *  Created on: 28 mar. 2022
 *      Author: Fernando León Cibeira
 *      Division: 1F
 *
 *  Request: Ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 *
 */

#include <stdio_ext.h>
#include <stdlib.h>

int main(void)
{
	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;

	printf("++++++Numero en medio de tres+++++\n\n·Ingrese un numero: ");

	scanf("%d",&numberOne);

	printf("Ingrese otro numero: ");

	scanf("%d",&numberTwo);

	printf("Ingrese otro numero: ");

	scanf("%d",&numberThree);

	if (numberOne > numberTwo && numberOne < numberThree || numberOne < numberTwo && numberOne > numberThree){

		printf("El numero del medio entre los ingresados es: %d",numberOne);

	}else if(numberTwo > numberOne && numberTwo < numberThree || numberTwo < numberOne && numberTwo > numberThree){

		printf("El numero del medio entre los ingresados es: %d",numberTwo);

	}else if (numberThree > numberOne && numberThree < numberTwo || numberThree < numberOne && numberThree > numberTwo){

		printf("El numero del medio entre los ingresados es: %d",numberThree);

	}else{

		printf("No existe el numero medio entre los ingresados");
	}

	return 0;
}

