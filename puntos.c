#include<stdio.h>
#include "puntos.h"

void sumayMostrar(struct Punto puntoY,struct Punto puntoC)
{
    int suma=puntoY.x+puntoC.x;
    printf("La Suma de los puntos en Y y C es: %d\n",suma);
}
