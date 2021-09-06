/*
 ============================================================================
 Name        : programa7.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "validaciones.h"


int main(void) {
	setbuf(stdout,NULL);

	int temperaturaCelcius;
	int temperaturaFarenheit;
	int resultadoCaF;
	int resultadoFaC;

	printf("Ingrese temperatura en Celcius: \n");
	scanf("%d",&temperaturaCelcius);
	if(validarCelcius(temperaturaCelcius)==1)
	{
		printf("Temperatura en Celcius valida \n");
	}
	else
	{
		printf("Temperatura en Celcius invalida \n");
	}

	printf("Ingrese temperatura en Farenheit: \n");
	scanf("%d",&temperaturaFarenheit);
	if(validarFarenheit(temperaturaFarenheit)==1)
	{
		printf("Temperatura en Farenheit valida \n");
	}
	else
	{
		printf("Temperatura en Farenheit invalida \n");
	}

	pasajeCelciusAFarenheit(temperaturaCelcius, &resultadoCaF);
	printf("La temperatura en celcius es %d° y el pasaje a farenheit da como resultado: %d° \n",temperaturaCelcius,resultadoCaF);

	pasajeFarenheitACelcius(temperaturaFarenheit, &resultadoFaC);
	printf("La temperatura en farenheit es %d° y el pasaje a celcius da como resultado: %d° \n",temperaturaFarenheit,resultadoFaC);





	return EXIT_SUCCESS;
}





