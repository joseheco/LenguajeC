#include <stdio.h>

int main(void)
    //vieja manera
{
char vector_caracteres[] = "Soy la vieja manera";
printf("%s\n", vector_caracteres);

//ahora la nueva manera
//La diferencia del anterior es que el anterior tiene un lugar establecido en la memoria
//con la nueva forma no tiene un lugar exacto de la memoria y lo que ocurre es que *cad esta agarrando la primera letra de la oracion para despues imprimir el resto hasta llegar a /0 el cual es representado con ; y se detiene.

char * cadena = "Esta es la nueva manera";
printf("%s\n", cadena);

char * cad2;
cad2 = &vector_caracteres[0];
// para demostrar que va a agarrar el caracter desde el numero que se le indica y continuara hasta el ;
printf("%s\n",cad2);

return (0);

}
