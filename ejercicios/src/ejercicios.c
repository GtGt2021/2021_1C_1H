/*
 ============================================================================
 Name        : ejercicios.c
 Author      : G vargas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf (stdout,NULL);
	int num;
	int acumulador=0;
	int i;
	float media;
	for (i=0; i<5; i++)
	{
		printf("Ingrese numero: \n");
		scanf("%d", &num);
		acumulador=acumulador+num;
	}
	media=(float)acumulador/5;
	printf("la media es: %f", media);
	return 0;
}
