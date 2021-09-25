/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int numero1;
	int numero2;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	float resultadoDivision;
	int resultadoFactorial1;
	int resultadoFactorial2;
	int flagOpcion1 = 0;
	int flagOpcion2 = 0;
	int flagOpcion3 = 0;
	int flagIntro=0;
	char salir;
	do
	{
/*muestro una introduccion y espero a que se presione enter*/
		if(flagIntro==0)
		{
			intro();
			flagIntro=1;
			printf("Presione enter para continuar\n\n");
			fflush(stdin);
			getchar();
		}
/************************************************************/

		menu(flagOpcion1,flagOpcion2,numero1,numero2);//muestro el menu de opciones
		/*pido que se ingrese una opcion 1-5*/
		printf("Seleccione una opcion (1-5): ");
		scanf("%d",&opcion);
		printf("\n");
		while(opcion <1 || opcion >5)
		{
			printf("Sleccione una opcion valida (1-5): ");
			scanf("%d",&opcion);
		}
		printf("\n");
/************************************************************/
		switch(opcion)
		{
			case 1:
				if(flagOpcion1==0)
				{
					printf("Ingrese el primer operando: ");//pido que se ingrese el primer operando
					scanf("%d",&numero1);
					printf("\n");
					flagOpcion1=1;						   //cambio el flag a 1 para saber que ya se ingreso el primer numero
					flagOpcion3=0;						   //cambio el flag a 0 para que no se pueda mostrar los resultados sin hacer los calculos
				}
				else //permite al usuario reingresar el numero  si lo desea
				{
					printf("Ingrese el primer operando: ");
					scanf("%d",&numero1);
					printf("\n");
					flagOpcion3=0;
				}
				break;

			case 2:
				if(flagOpcion2==0)
				{
					printf("Ingrese el segundo operando: ");//pido el segundo operando
					scanf("%d",&numero2);
					printf("\n");
					flagOpcion2=1;						   //cambio el flag a 1 para saber que ya se ingreso el segundo numero
					flagOpcion3=0;						   //cambio el flag a 0 para que no se pueda mostrar los resultados sin hacer los calculos

				}
				else//permite al usuario reingresar el numero  si lo desea
				{
					printf("Ingrese el segundo operando: ");
					scanf("%d", &numero2);
					printf("\n");
					flagOpcion3=0;
				}
				break;
			case 3:
				if(flagOpcion1==0) //pregunto si se ingreso el primer operando
				{
					printf("Primero debe ingresar el primer operando\n\n");
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();
				}
				else if(flagOpcion2==0)//pregunto si se ingreso el segundo operando
				{
					printf("Primero debe ingresar el segundo operando\n\n");
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();
				}
				else if(flagOpcion3==0) //realizo los calculos
				{
					suma(numero1,numero2,&resultadoSuma);
					resta(numero1,numero2,&resultadoResta);
					multiplicacion(numero1,numero2,&resultadoMultiplicacion);
					division(numero1,numero2,&resultadoDivision);
					factorial(numero1,&resultadoFactorial1);
					factorial(numero2,&resultadoFactorial2);
					printf("Realizando calculos\n");
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();

					flagOpcion3=1;//cambio el flag a 1 para saber si ya se realizaron las operaciones
				}
				else // aviso que ya se realizaron los calculos
				{
					printf("Ya realizaste calculaste las operaciones\n\n");
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();
				}
				break;
			case 4:
				if(flagOpcion3==1)// muestro los resultados en caso de ser posible o el por que no es posible realizar la operacion
				{
					printf("El resultado de la suma es: %d\n",resultadoSuma);
					printf("El resultado de la resta es: %d\n",resultadoResta);
					printf("El resultado de la multiplicacion es: %d\n",resultadoMultiplicacion);
					if(division(numero1,numero2,&resultadoDivision))
					{
						printf("El resultado de la division es: %f\n",resultadoDivision);
					}
					else
					{
						printf("No se puede dividir por 0\n");
					}
					if(factorial(numero1,&resultadoFactorial1)&&factorial(numero2,&resultadoFactorial2))
					{
						printf("El factorial de A es: %d \nEl factorial de B es: %d\n\n",resultadoFactorial1,resultadoFactorial2);
					}
					else if(factorial(numero1,&resultadoFactorial1)&&!factorial(numero2,&resultadoFactorial2))
					{
						printf("El factorial de A es: %d\nEl factorial de B no se puede calcular si no es un numero entero positivo\n\n",resultadoFactorial1);
					}
					else if(!factorial(numero1,&resultadoFactorial1)&&factorial(numero2,&resultadoFactorial2))
					{
						printf("El factorial de A no se puede calcular si no es un numero entero positivo\nEl factorial de B es: %d \n\n",resultadoFactorial2);
					}
					else
					{
						printf("El factorial de A no se puede calcular si no es un numero entero positivo \nEl factorial de B no se puede calcular si no es un numero entero positivo \n\n");
					}
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();
				}
				else//aviso que no se realizaron las operaciones
				{
					printf("Primero debes calcular las operaciones\n\n");
					printf("Presione enter para continuar\n\n");
					fflush(stdin);
					getchar();
				}
				break;
			case 5://salir del menu
				printf("Esta seguro que desea salir?");
				fflush(stdin);
				scanf("%c",&salir);
				printf("\n");
				break;
		}
	}while(salir!='s');
	return EXIT_SUCCESS;
}
