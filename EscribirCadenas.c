#include <stdio.h>

int main(void)
{
    char cadena[40];

    printf("Ingrese cadena: ");
    fflush(stdin);
    scanf("%[^\n]s",&cadena);
    printf("La cadena es %s \n", cadena);

    return (0);
}
