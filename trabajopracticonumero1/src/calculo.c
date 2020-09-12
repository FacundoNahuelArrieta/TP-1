/*
 * calculo.c
 *
 * Name        : trabajopracticonumero1.c
 * Author      : Facundo Arrieta
 * División    : E
 */
/*
 * calculos.c
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"

float ccSuma(int num1, int num2)/*Desarrollo / Parametersformals*/
{
	int suma = 0;
	suma = num1+num2;
	return suma;
}
float ccResta(int num1, int num2)/*Desarrollo / Parametersformals*/
{
	int resta = 0;
	resta = num1-num2;
	return resta;
}
float ccDivision(int num1, int num2)/*Desarrollo / Parametersformals*/
{
	float division=0;
	division = (float)num1/num2;
	return division;
}
float ccMultiplicacion(int num1, int num2)/*Desarrollo / Parametersformals*/
{
	int multiplicacion=0;
	multiplicacion = num1*num2;
	return multiplicacion;
}
float ccFactorial(int num)/*Desarrollo / Parametersformals*/
{
	float factorial=1;
	float i;
    for ( i=1; i<=num; i++)
    {
        factorial= factorial*i;
    }
    return factorial;
}

