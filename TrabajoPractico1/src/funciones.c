/*
 * funciones.c
 *
 *  Created on: 11 abr. 2021
 *      Author:
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void intro(void)
{
        printf("---------------------------------------\n");
        printf("|      TRABAJO PRACTICO NUMERO 1      |\n");
        printf("|                                     |\n");
        printf("|    Programacion I / Laboratorio I   |\n");
        printf("|                                     |\n");
        printf("|Tecnicatura Superior en Programacion |\n");
        printf("|                                     |\n");
        printf("|               UTN-FRA               |\n");
        printf("|                                     |\n");
        printf("|      Alumno: Defranchi Agustin      |\n");
        printf("|                                     |\n");
        printf("|             Curso: 1ro A            |\n");
        printf("---------------------------------------\n");


}

void menu(int flag1, int flag2, int numero1,int numero2)
{

	system("cls");//funciona en el .exe
	printf("Menu de la calculadora\n");


	if(flag1==0)
	{
		printf("1. Ingresar 1er operando (A=x)\n");
	}
	else
	{
		printf("1. Ingresar 1er operando (A=%d)\n",numero1);
	}


	if(flag2==0)
	{
		printf("2. Ingresar 2do operando (B=y)\n");
	}
	else
	{
		printf("2. Ingresar 2do operando (B=%d)\n",numero2);
	}
	if(flag1==0&&flag2==0)
	{
		printf("3. Calcular todas las operaciones\n");
		printf("	a) Calcular la suma (A+B)\n");
		printf("	b) Calcular la resta (A-B)\n");
		printf("	c) Calcular la division (A/B)\n");
		printf("	d) Calcular la multiplicacion (A*B)\n");
		printf("	e) Calcular el factorial (A!,B!)\n");
	}
	else if(flag1==1&&flag2==0)
	{
		printf("3. Calcular todas las operaciones\n");
		printf("	a) Calcular la suma (%d+B)\n",numero1);
		printf("	b) Calcular la resta (%d-B)\n",numero1);
		printf("	c) Calcular la division (%d/B)\n",numero1);
		printf("	d) Calcular la multiplicacion (%d*B)\n",numero1);
		printf("	e) Calcular el factorial (%d!,B!)\n",numero1);
	}
	else if(flag2==1&&flag1==0)
	{
		printf("3. Calcular todas las operaciones\n");
		printf("	a) Calcular la suma (A+%d)\n",numero2);
		printf("	b) Calcular la resta (A-%d)\n",numero2);
		printf("	c) Calcular la division (A/%d)\n",numero2);
		printf("	d) Calcular la multiplicacion (A*%d)\n",numero2);
		printf("	e) Calcular el factorial (A!,%d!)\n",numero2);
	}
	else
	{
		printf("3. Calcular todas las operaciones\n");
		printf("	a) Calcular la suma (%d+%d)\n",numero1,numero2);
		printf("	b) Calcular la resta (%d-%d)\n",numero1,numero2);
		printf("	c) Calcular la division (%d/%d)\n",numero1,numero2);
		printf("	d) Calcular la multiplicacion (%d*%d)\n",numero1,numero2);
		printf("	e) Calcular el factorial (%d!,%d!)\n",numero1,numero2);
	}
	printf("4. Informar resultados\n");
	printf("5. Salir\n");



}

int suma(int numero1,int numero2,int* resultado)
{
	int funciona=0;
	*resultado=numero1+numero2;
	if(resultado!=NULL)
	{
		funciona=1;
	}
	return funciona;
}

int resta(int numero1,int numero2,int* resultado)
{
	int funciona=0;
	*resultado=numero1-numero2;
	if(resultado!=NULL)
		{
			funciona=1;
		}
	return funciona;
}

int multiplicacion(int numero1,int numero2,int* resultado)
{
	int funciona=0;
	*resultado=numero1*numero2;
	if(resultado!=NULL)
		{
			funciona=1;
		}
	return funciona;
}

int division(int numero1,int numero2,float* resultado)
{
	int funciona=0;
	if(numero2!=0)
	{
		*resultado=(float)numero1/numero2;
	}

	if(resultado!=NULL&&numero2!=0)
		{
			funciona=1;
		}
	return funciona;
}

int factorial(int numero, int* resultado)
{
	int funciona=0;
	int flag=0;
	if(numero>0)
	{
		for(int i= 1;i<=numero;i++)
		{
			if(flag==0)
			{
				*resultado=i;
				flag=1;
			}
			else
			{
				*resultado=*resultado*i;
			}
		}
	}
	if(resultado!=NULL&&numero>0)
	{
		funciona=1;
	}
	return funciona;
}


