#include <stdio.h>

struct contact
{
char name[40];
char address[80];
int age;
long phone;
};

typedef struct contact contact_L;

int main(void)
{
contact_L c1;

///Se tuvo que cambiar scanf("%s",c1.name); por fgets(c1.name, 40, stdin); por que no se podia escribir dos lineas por separado en el nombre sin que salte al proximo printf, el mismo cambio se iso con c1.address.

printf("Enter Name:");
fflush(stdin);
fgets(c1.name, 40, stdin);

printf("Enter Address:");
fflush(stdin);
fgets(c1.address, 80, stdin);

printf("Enter Age:");
fflush(stdin);
scanf("%d",&c1.age);

printf("Enter Phone:");
fflush(stdin);
scanf("%ld",&c1.phone);

printf("Name: %s \n",c1.name);
printf("Address: %s \n",c1.address);
printf("Age: %d\n",c1.age);
printf("Phone: %ld\n",c1.phone);

return (0);

}
