#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct datos
{
    char *nombre;
    char *rut;
    char *direccion;
    int  telefono;
};


int main()
{
    int b;
    struct datos g;
    b=21480;

    g.nombre = malloc(sizeof(char)*10);
    g.rut = malloc(sizeof(char)*15);
    g.direccion = malloc(sizeof(char)*32);
    g.nombre = "he";
    g.rut = "1233";
    g.direccion = "13231";
    g.telefono = 32131;

    printf("- %s \n- %s \n- %s \n- %i",g.nombre,g.rut,g.direccion,g.telefono);
    free(g.nombre);
    free(g.rut);
    free(g.direccion);
    if(true==1)
    {
        printf("%i\n",b);
    }
    
    return 0;
}