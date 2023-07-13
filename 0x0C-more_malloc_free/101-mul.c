#include "main.h"
/*
* the prod funct take the twonumbers as arguemen
*/int prod(int n, int n1)
{
return (num1 * num2);
}
/*
* program exvustion starts here
*/int main(int argc, char *argv[])
{
/*
*  we Check the number of arguments
*/
if (argc != 3)
{
printf("Error\n");
return (98);
}

/*
* we extract  numbers from  the command line argument
*/
char *jus;
int num1 = strtol(argv[1], &jus, 10);
int num2 = strtol(argv[2], &jus, 10);

/*
* we then check if numbers are composed of digits or not
*/
for (int i = 1; i < argc; i++)
{
char *c = argv[i];
while (*c)
{
if (!isdigit(*c))
{
printf("Error\n");
return (98);
}
c++;
}
}

/*
* here we Multiply the two  numbers from funct produ
*/
int output = prod(n, n1);

/*
* finally print the results
*/
printf("%d\n", output);

return (0);
}
