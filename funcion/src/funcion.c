/*
 ============================================================================
 Name        : funcion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL);
	float resultado;
	int estado;
	float num1, num2;


}
//FORMATO FUNCION
// TIPO NOMBRE (TIPO ARGUMENTO, TIPO ARGUMENTO, ......)
// void si no retorna nada lo podemos mandar la info a puntero
// float int si recibe
//& Dirección de memoria (PUNTEROS)
//* Contenido en la dirección de memoria
int pedirDatosAlUsuarioYVerificar(float *pResultado, float min, float max, int reintentos){
	float aux;
	int retorno;
	int i;
	for (i=0; i<reintentos; i++){
	printf("Ingrese numero:\n");
	scanf("%f", &aux);
	if (aux>=a && aux<=b){
		retorno = 0;
		*pResultado=aux;
		break;
	}else{
		retorno = 1;
	}
	}
	return retorno;
}
float pedirFloatAUsuario
