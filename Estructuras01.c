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

printf("Enter Name:");
fflush(stdin);
scanf("%[^\n]s",c1.name);

printf("Enter Address:");
fflush(stdin);
scanf("%[^\n]s",c1.address);

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
