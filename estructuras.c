#include <stdio.h>
#include <string.h>


struct alumno
{
int nota;
char nombre[40];
int edad;
};   //siempre tiene que tener ; al finalizar struct.

int main(void)
{
// int x;     es igual a decir struct alumno a1;   donde int seria struct alumno y x seria a1.

struct alumno a1;

a1.nota=15;
a1.edad=14;

char nombreAlumno[]="Jose Herrera";
strcpy(a1.nombre,nombreAlumno);

printf("El alumno %s, edad %d, tiene %d de nota\n", a1.nombre,a1.edad,a1.nota);

return (0);
}
