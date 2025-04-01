#include <stdio.h>

int main(){

printf("Hola mundo\n");

int variable = 5;
int  *p = &variable;


printf("El contenido del puntero es: %d\n", *p);
printf("La direccion de memoria almacenada por el puntero: %p\n", p);
printf("La direccion de memoria de la variable: %p\n", &variable);
printf("La direccion del puntero: %p\n", &p);
printf("Tamano de memoria usado por la variable: %d\n", sizeof(variable));

    return 0;
}
