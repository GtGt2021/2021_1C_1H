/*
 ============================================================================
 Name        : clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//parte 3 declararla aqui arrriba (la funcion nnueva)
int sumarEnteros(int num1, int num2);
void imprimirResultado(int numero);
int restarEnteros(int num1, int num2);
int multiplicarEnteros (int num1, int num2);
int dividirEnteros (int num1, int num2);
int moduloEnteros (int num1, int num2);

int main(void) {
	setbuf(stdout,NULL); // SIEMPRE TIENE QUE ESTAR
	int numero1;
	int numero2;
	int resultado;
	float promedio;
	float impuesto;
	float impuestoResultado;

	printf("ingrese numero1:\n");
	scanf("%d", &numero1);
	printf("ingrese numero2:\n");
	scanf("%d", &numero2);
	//parte 2 USO DE LA FUNCION
	resultado=sumarEnteros(numero1,numero2);
	promedio=(float)resultado/2;
	imprimirResultado(resultado);
	printf("Promedio: %f\n", promedio);
	printf("ingrese impuesto:\n");
	scanf("%f", &impuesto);
	impuestoResultado=impuesto+resultado;
	printf("el total es: %f", impuestoResultado);

	return EXIT_SUCCESS;
}

//Parte 1 De crear Funcion retornar nombre funcion (parametros)
int sumarEnteros(int num1, int num2){
	int retorno;
	retorno=num1+num2;
	return retorno;
}
void imprimirResultado(int numero){
	printf("Resultado: %d\n",numero);
}
int restarEnteros(int num1, int num2){
int retorno=num1-num2;
return retorno;
}
int multiplicarEnteros(int num1, int num2){
	int retorno;
	retorno=num1*num2;
	return retorno;
}
float dividirEnteros(int num1, int num2){
	float retorno;
	retorno=(float)num1/num2;
	return retorno;
}
int moduloEnteros (int num1, int num2){
	int retorno;
	retorno=num1%num2;
	return retorno;
}
