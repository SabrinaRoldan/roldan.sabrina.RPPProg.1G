#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

/*1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada
actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a
los que ya tiene el país. */

void actualizarRecuperados(ePais* pais,int recuperadosDia);

/*2. Crear una función que se llame invertirCadena que reciba una cadena de
caracteres como parámetro y su responsabilidad es invertir los caracteres de la misma.
Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU *
*/
void invertirCadena(char cadena[]);

/*3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres
como parámetro y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/
void ordenarCaracteres(char cadena[]);

int main()
{
    /*ePais pais={1,"Argentina",10,10,10};

    int num=20;

    actualizarRecuperados(&pais,num);

    printf("%d\n",pais.recuperados);*/

    invertirCadena("UTN-FRA");

    char palabra[20]="algoritmo";

    ordenarCaracteres(palabra);
    printf("\n%s\n",palabra);

    return 0;
}

/*void actualizarRecuperados(ePais pais,int recuperadosDia)
{
    return *pais.recuperados+recuperadosDia;
}*/

void invertirCadena(char cadena[])
{
    int tam=strlen(cadena);

    for(int i=tam;i>-1;i--)
    {
       printf("%c",cadena[i]);
    }
}

void ordenarCaracteres(char cadena[])
{
    char aux;
    int tam=strlen(cadena);

    for(int i=0;i<tam-1;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(cadena[i]>cadena[j])
            {
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }
}
