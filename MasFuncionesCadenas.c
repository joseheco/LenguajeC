#include <stdio.h>
#include <string.h>


int main (void)
{
char nombre1[]="Mi nombre es Jose Herrera";
char nombre2[]="Mi nombre es Zz";

printf("%s\n",nombre1);


// La funcion de strlen es de contar la cantidad de caracteres que se le asignara luego a largo.
int largo;
largo = strlen(nombre1);

printf("Longitud de nombre1: %d\n", largo);

// con esta va a comprarar una cadena con la otra si son iguales va a ser igual a 0 si es mayor va a ser un numero mayor a 0
// y si es menor va a dar negativo.  ( se mide el caracter cual es el menor al otro por orden alfavetico y no por el largo de la oracion)
int i;
i = strcmp(nombre1,nombre2);

printf("%d\n",i);

if (i == 0)
{
printf("son iguales!.\n");
}
else if (i < 0)
{
printf("nombre1 es menor de caracteres a nombre2\n");
}
else
{
printf("Nombre2 es menor de caracteres a nombre12\n");
}
return (0);
}
