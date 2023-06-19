#include <stdio.h>
/* more headers goes there */

/*
*betty style doc for function main goes there */int main(void)
{
char lcr = 'z';
while  (lcr >= 'a')
{
putchar(lcr);
lcr--;
}
putchar('\n');
return (0);
}
