#include <stdio.h>
#include <stdlib.h>
#include "libs/tools.h"
#include "libs/opMatematicas.h"

int main()
{
	/*********** VARIABLES ***********/
	int opcion=0;
	char aux[1];
	int numero1=-9999;
	int numero2=-9999;

	int resultadoSuma=0;
	int resultadoResta=0;
	int resultadoMultiplicacion=0;
	int resultadoDivision=0;
	int factorialA=0;
	int factorialB=0;
	/********** FIN VARIABLES ******/


	do
	{
		clrscr();
		/********* MENU DE OPCIONES ****************/
		printf("Menu\n");
		if (numero1==-9999)
		{
			printf("\t1. Ingresar 1er operando (A)\n");
		}
		else
		{
			printf("\t1. Ingresar 1er operando (A=%d)\n", numero1);
		}

		if (numero2==-9999)
		{
			printf("\t2. Ingresar 2do operando (B)\n");
		}
		else
		{
			printf("\t2. Ingresar 2do operando (B=%d)\n", numero2);
		}

		printf("\t3. Calcular todas las operaciones	\n");
		printf("\t4. Informar resultados\n");
		printf("\t5. Salir\n");

		printf("Seleccione opcion: ");
		scanf("%d", &opcion);
		fflush(stdin);
		/********* FIN MENU DE OPCIONES *************/

		switch(opcion)
		{
			case 1:
			printf("Ingrese el primer operando: ");
			scanf("%d", &numero1);
			break;
			case 2:
			printf("Ingrese el segundo operando: ");
			scanf("%d", &numero2);
			break;
			case 3:
			if (numero1 == -9999 || numero2 == -9999)
			{
				printf("Por favor, primero ingrese los 2 operandos, presione ENTER para continuar.\n");
				fflush(stdin);
				setbuf(stdin,NULL);
				while(getchar()!='\n');

			}
			else
			{
				resultadoSuma=suma(numero1, numero2);
				resultadoResta=resta(numero1, numero2);
				resultadoMultiplicacion=multiplicacion(numero1, numero2);
				resultadoDivision=division(numero1, numero2);
				factorialA=factorial(numero1);
				factorialB=factorial(numero2);
				printf("Presione ENTER para continuar...");
				fflush(stdin);
				setbuf(stdin,NULL);
				while(getchar()!='\n');

			}
			break;
			case 4:
			if (numero1 == -9999 || numero2 == -9999)
			{
				printf("Por favor, primero ingrese los 2 operandos, presione ENTER para continuar.\n");
				fflush(stdin);
				setbuf(stdin,NULL);
				while(getchar()!='\n');

			}
			else
			{
				printf("El resultado de %d + %d es: %d\n", numero1, numero2, resultadoSuma);
				printf("El resultado de %d - %d es: %d\n", numero1, numero2, resultadoResta);
				printf("El resultado de %d * %d es: %d\n", numero1, numero2, resultadoMultiplicacion);
				printf("El resultado de %d / %d es: %d\n", numero1, numero2, resultadoDivision);
				printf("El factorial de A es: %d y El factorial de B es: %d\n", factorialA, factorialB);
				fflush(stdin);

				printf("Presione ENTER para continuar...");
				fflush(stdin);
				setbuf(stdin,NULL);
				while(getchar()!='\n');

			}
			break;
			case 5:
			break;
			default:
			printf("Opcion no valida. Presione ENTER para continuar...");
			fflush(stdin);
			setbuf(stdin,NULL);
			while(getchar()!='\n');
			break;
		}

	} while (opcion != 5);
	return 0;
}
