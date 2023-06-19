#include <stdio.h>
/* more headers goes there */

/*
*betty style doc for function main goes there */int main(void)
{
char lc;
char uc;
for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);
for (uc = 'A'; uc <= 'Z'; uc++)
putchar(uc);

putchar('\n');
return (0);
}

