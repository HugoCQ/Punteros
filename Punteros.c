#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct nodo
{
    int dato;
    struct nodo *sgte;
};

//typedef struct nodo Nodo;
struct nodo *crea()
{
    struct nodo *Lista;
    Lista = malloc(sizeof(struct nodo));
    Lista->dato=0;
    Lista->sgte=NULL;
    return Lista;
}

int main(void)
{
    int input;
    struct nodo *L;
    L=crea();
    printf("Ingrese un numero:");
    scanf("%i",&input);
    L->dato=input;
    L->sgte=crea();
    L->sgte->dato=input*3;

    L->sgte->sgte=crea();
    L->sgte->sgte->dato=input*4;

    printf("%i\n",L->dato);
    printf("%i\n",L->sgte->dato);
    printf("%i\n",L->sgte->sgte->dato);

    free(L->sgte->sgte);
    free(L->sgte);
    free(L);
    
    return 0;
}