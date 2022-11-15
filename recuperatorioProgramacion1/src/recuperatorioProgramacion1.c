/*
 ============================================================================
 Name        : recuperatorioProgramacion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
/*
 1. Dada  una estructura ePais cuyos campos son
 id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
  Desarrollar una función llamada actualizarRecuperados que reciba el país y
  los recuperados del dia y que acumule estos a los que ya tiene el país.
  La función no devuelve nada.
 */


typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;

}ePais;
//1
void actualizarRecuperados(ePais p[], int recuperados);
//2
int invertirCadena(char pVec[]);
//3
int ordenarCaracteres(char pVec[]);

int main(void) {
	setbuf(stdout,NULL);
	char cadena1[20]="UTNFRA";
	char cadena2[20]="algoritmo";
	if(invertirCadena(cadena1)==0)
	{
		printf("%s\n", cadena1);
	}

	if(ordenarCaracteres(cadena2)==0)
	{
		printf("%s\n", cadena2);
	}


	return EXIT_SUCCESS;
}
/*
void actualizarRecuperados(ePais p, int recuperados)
{
	p.nombre
}
*/

/*
 2. Crear una función que se llame invertirCadena que reciba
  una cadena de caracteres como parámetro  y su responsabilidad es
   invertir los caracteres de la misma. Ejemplo si le pasamos
   UTN-FRA la deja como ARF-NTU*/

int invertirCadena(char pVec[]) //AGREGAR CRITERIO (0 ASC -  1 DESC)
{
	int ret=-1;
	char aux;
	if(pVec!=NULL)
	{
		for(int i=0; i<strlen(pVec)-1; i++)
		{
			for(int j=i+1; j<strlen(pVec);j++)
			{

				aux=pVec[i];
				pVec[i]=pVec[j];
				pVec[j]=aux;

			}
		}
		ret=0;
	}
	return ret;
}

/*3. Crear una función que se llame ordenarCaracteres que reciba
 *  una cadena de caracteres como parámetro  y su responsabilidad
 *  es ordenar los caracteres de manera ascendente dentro de la cadena.
 *  Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/

int ordenarCaracteres(char pVec[])
{
	int ret=-1;
	char aux;
	if(pVec!=NULL)
	{
		for(int i=0; i<strlen(pVec)-1; i++)
		{
			for(int j=i+1; j<strlen(pVec);j++)
			{

				if(pVec[i]>pVec[j])
				{
					aux=pVec[i];
					pVec[i]=pVec[j];
					pVec[j]=aux;
				}

			}
		}
		ret=0;
	}
	return ret;
}
