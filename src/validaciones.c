/*
 * validaciones.c
 *
 *  Created on: 6 sep. 2021
 *      Author: Luk
 */

int validarCelcius(int tempCelcius){
	int ret = 1;
	if(tempCelcius < 0 || tempCelcius > 100)
	{
		ret = 0;
	}
	return ret;
}

int validarFarenheit(int tempFarenheit){
	int ret = 1;
	if(tempFarenheit < 32 || tempFarenheit > 212)
	{
		ret = 0;
	}
	return ret;
}
