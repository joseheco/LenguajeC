#include <stdio.h>

int main(void)
{
printf("Bienvenido a la Fabrica de Vectores!\n");
size_t largo;

printf("Ingrese el largo de su vector: ");
fflush(stdin);
scanf("%ld",&largo);
printf("El largo ingresado es: %ld",largo);

int vector1[largo];
int i;

for (i = 0; i < largo; i++)
{
  printf("\n Ingrese el valor para la posicion %d: ", i);
  fflush(stdin);
  scanf("%d", &vector1[i]);
}
printf ("ok, ahora vamos a imprimir su vector\n");

for (i = 0; i < largo; i++)
{
  printf ("Vector[%d]: %d \n",i,vector1[i]);
}
return 0;
}
