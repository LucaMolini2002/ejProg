/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: Luca
 */
#include <stdio.h>
#include <stdlib.h>


int pasajeCelciusAFarenheit(int tempCelcius, int *resultado){
	int ret = 1;

	*resultado = (tempCelcius * 9/5) + 32;

	return ret;
}

int pasajeFarenheitACelcius(int tempFarenheit, int *resultado){
	int ret = 1;

	*resultado = (tempFarenheit - 32) * 9/5;

	return ret;
}
