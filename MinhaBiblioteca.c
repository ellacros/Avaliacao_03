#include "MinhaBiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


tletras trocarletras(char x)
{
    char frase[150]; //string
   
    int contador = 0;
    char letratrocada;
    char letrasubstituida;
    printf("Escolha a letra a ser trocada: \n");
    scanf("%c", &letratrocada);
    printf("Escolha a letra a ser substituida: \n");
    scanf("%c", &letrasubstituida);
    
    int  i=0;
    while(frase[i] != '\0')
    {
        frase[i] = 'x';
        i++;
    }

    printf("A frase com as letras trocadas eh: %s", frase);

    printf("\n\n");

    return (trocarletras (x));
  }

char letrasubstituida(char y)
{
    char nova_letra;
    int contador = 0;
    char t; //letra_trocada;
    char letra_substituida;
    switch (y)
    {
      case 't':
            nova_letra = letra_substituida;
            contador = contador + 1;
            break;

      default:
            nova_letra = y;
            break;
    }
    return nova_letra;
}