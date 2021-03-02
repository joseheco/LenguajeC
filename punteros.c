#include <stdio.h>

int main (void)
{

int vector [4]; // se crea un vector de int con 5 lugares 0,1,2,3,4.
int b;

vector[0]=1;
vector[1]=2;
vector[2]=3;
vector[3]=4;
vector[4]=5;

b = 10;

//ahora se creara 2 punteros 


int *punt1;
int *punt2;

punt1= &vector[0];
punt2= &b;


printf("el puntero 1 apunta a: %d\n", *punt1); //cuando se le pone el * es para que copie al que esta apuntando en este caso copiara punt1 a vector 0 que es 1
printf("la direccion de vector 1 es : %p\n", punt2);

return (0);
}

