/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL);
	float resultado;
	int estado;
	float num1, num2;
	printf("")
	printf()
}
//FORMATO FUNCION
// TIPO NOMBRE (TIPO ARGUMENTO, TIPO ARGUMENTO, ......)
// void si no retorna nada lo podemos mandar la info a puntero
// float int si recibe
//& Direcci�n de memoria (PUNTEROS)
//* Contenido en la direcci�n de memoria
float dividir (float a, float b, float *pResultado){
	float resultado;
	int estado;
	resultado = a/b;
	return resultado;
	*pResultado=resultado;
}
float pedirFloatAUsuario
