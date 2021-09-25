/*
 * funciones.h
 *
 *  Created on: 11 abr. 2021
 *      Author:
 */
#include <stddef.h>
#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/** \brief muestra una introduccion
     *
     * \param void
     * \return void
     *
     */
    void intro(void);


/** \brief muestra el menu de opciones
 *
 * \param flag1 int flag que le permite saber si se ingreso el numero1
 * \param flag2 int flag que le permite saber si se ingreso el numero2
 * \param numero1 int muestro el numero1 ingresado
 * \param numero2 int muestro el numero2 ingresado
 * \return void
 *
 */
void menu(int flag1, int flag2, int numero1,int numero2);


/** \brief calcula la suma entre 2 numeros y guarda el resultado
 *
 * \param numero1 int primer numero a operar
 * \param numero2 int segundo numero a operar
 * \param resultado int* variable que guarda el resultado de la operacion
 * \return int retorna 1 si el resultado es distinto de NULL
 *
 */
int suma(int numero1,int numero2,int* resultado);


/** \brief calcula la resta entre 2 numeros y guarda el resultado
 *
 * \param numero1 int primer numero a operar
 * \param numero2 int segundo numero a operar
 * \param resultado int* variable que guarda el resultado de la operacion
 * \return int retorna 1 si el resultado es distinto de NULL
 *
 */
int resta(int numero1,int numero2,int* resultado);


/** \brief calcula la multiplicacion entre 2 numeros y guarda el resultado
 *
 * \param numero1 int primer numero a operar
 * \param numero2 int segundo numero a operar
 * \param resultado int* variable que guarda el resultado de la operacion
 * \return int retorna 1 si el resultado es distinto de NULL
 *
 */
int multiplicacion(int numero1,int numero2,int* resultado);


/** \brief calcula la division entre 2 numeros y guarda el resultado
 *
 * \param numero1 int primer numero a operar
 * \param numero2 int segundo numero a operar
 * \param resultado float* variable que guarda el resultado de la operacion
 * \return int retorna 1 si se pudo realizar la operacion
 *
 */
int division(int numero1,int numero2,float* resultado);


/** \brief calcula el factorial del numeros y guarda el resultado
 *
 * \param numero int numero a operar
 * \param resultado int* variable que guarda el resultado de la operacion
 * \return int retorna 1 si se pudo realizar la operacion
 *
 */
int factorial(int numero,int* resultado);


#endif /* FUNCIONES_H_ */
