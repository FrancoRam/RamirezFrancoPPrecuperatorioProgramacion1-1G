/*
 ============================================================================
 Name        : progra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define TAM 14

//int sortSimple(int pVec[], int tam,int criterio); //AGREGAR CRITERIO (0 ASC -  1 DESC)
int reemplazarCaracteres(char pVec[], char caracter1, char caracter2);
int invertir(int numero);
int main(void) {
	char cadenaDeCaracteres[50]="abcdefghijklmn�opqrstuvwxyzaeioua";
	int cantRempl;
	int numero=0;
	int numeroInvertido;
	char prueba[20];


	// char alumno[10]="ramirez";
	float promedio[TAM]={1.00,2.00,3.00,4.00,5.00,6.00,7.00,8.00,9.00,10.00,11.00,12.00,13.2243,14.0145};


	for(int i=0; i<TAM; i++)
	{
		if(i==(TAM-1))
			{
				printf("%.2f\n", promedio[i]);
			}
	}

	if((cantRempl=reemplazarCaracteres(cadenaDeCaracteres, 'u', 'X'))==-1)
	{
		printf("\nno se pudo realizar el reemplazo");
	}
	else
	{
		printf("\nNueva cadena: %s", cadenaDeCaracteres);
		printf("\nCantidad de reemplazos: %d", cantRempl);
	}


	numeroInvertido=invertir(numero);
	printf("\nnumero invertido: %d\n", numeroInvertido);


	puts("ingrese algo: ");
	gets(prueba);
	printf("\nprueba: %s", prueba);
	return EXIT_SUCCESS;
}


int reemplazarCaracteres(char pVec[], char caracter1, char caracter2)
{
	int ret=-1;
	int contador=0;
	if(pVec!=NULL)
	{
		for(int i=0;i<strlen(pVec);i++)
		{
			if(pVec[i]==caracter1)
			{
				pVec[i]=caracter2;
				contador++;
			}
		}
		ret=contador;
	}

	return ret;
}


//--------------------------------------------------------------
int invertir(int numero)
{
	int ret;
	if(numero != 0)
	{
		numero= (numero * -1);
		ret=numero;
	}
	else
	{
		ret= numero;
	}

	return ret;
}
//--------------------------------------------------------------
/*
int sortSimple(int pVec[], int tam,int criterio) //AGREGAR CRITERIO (0 ASC -  1 DESC)
{
	int ret=-1;
	int aux;
	if(pVec!=NULL && tam>0 && (criterio == 1 || criterio == 0))
	{
		for(int i=0; i<tam-1; i++)
		{
			for(int j=i+1; j<tam;j++)
			{
				if(criterio==0) //ORDENAMIENTO ASCENDENTE
				{
					if(pVec[i]>pVec[j])
					{
						aux=pVec[i];
						pVec[i]=pVec[j];
						pVec[j]=aux;
					}
				}
				else			//ORDENAMIENTO DESCENDENTE
				{
					if(pVec[i]<pVec[j])
					{
						aux=pVec[i];
						pVec[i]=pVec[j];
						pVec[j]=aux;
					}
				}

			}
		}
		ret=0;
	}
	return ret;
}
*/
