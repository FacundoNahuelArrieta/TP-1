/*
 ============================================================================
 Name        : trabajopracticonumero1.c
 Author      : Facundo Arrieta
 División    : E
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculo.h"

int main() {
	setbuf(stdout, NULL);
	int opcion = 0;
	float num1 = 0;
	float num2 = 0;
	float resultadosuma;
	float resultadoresta;
	float resultadomultiplicacion;
	float resultadodivision;
	float resultadofactorialA;
	float resultadofactorialB;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	char seguir = 's';

	while (seguir == 's') {
		printf("Los operandos son A=%.2f B%.1f \n", num1, num2);
		printf("\n\t\t============================== \n");
		printf("1- ingresar operando A\n");
		printf("\n\t\t============================== \n");
		printf("2- Ingresar operando B\n");
		printf("\n\t\t============================== \n");
		printf("3- Realizar operaciones \n");
		printf("\n\t\t============================== \n");
		printf("4- Mostrar resultados\n");
		printf("\n\t\t============================== \n");
		printf("5- Salir\n");
		scanf("%d", &opcion);
		system("cls");

		if (opcion == 5) {

			seguir = 'n';
			printf("operacion terminada");
			break;

		}

		switch (opcion) {
		case 1:
			printf("Ingrese el primer numero\n");
			scanf("%f", &num1);
			flag1 = 1;
			break;
		case 2:
			if (flag1 == 1) {

				printf("Ingrese el segundo numero\n");
				scanf("%f", &num2);
				flag2 = 1;

			} else {

				printf("Debe ingresar el operando si desea continuar \n");

			}
			system("pause");
			break;
		case 3:
			if (flag2 == 1) {
				resultadosuma = ccSuma(num1, num2);
				resultadoresta = ccResta(num1, num2);
				resultadodivision = ccDivision(num1, num2);
				resultadomultiplicacion = ccMultiplicacion(num1, num2);
				resultadofactorialA = ccFactorial(num1);
				resultadofactorialB = ccFactorial(num2);
				flag3 = 1;
			} else {

				printf("Debe ingresar el operando si desea continuar \n");

			}
			system("pause");
			break;
		case 4:

			if (flag3 == 1) {

				printf("El resultado de la suma es: %.2f \n", resultadosuma);
				printf("El resultado de la resta es: %.2f \n", resultadoresta);

				if (num2 == 0) {
					printf("No se puede dividir por 0 \n");
				} else {

					printf("El resultado de la division es: %.2f \n",
							resultadodivision);

				}
				printf("El resultado de la multiplicacion es: %.2f \n",
						resultadomultiplicacion);

				printf("El resultado del Factorial de A es: %.2f \n",
						resultadofactorialA);

				printf("El resultado del Factorial de B es: %.2f \n",
						resultadofactorialB);
			} else {

				printf("No ha realizado operaciones");
			}
			system("pause");
			break;

		}
		printf("Desea seguir operando?\n");

	}

	return EXIT_SUCCESS;

}
