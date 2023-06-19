#include <stdio.h>
/* more headers goes there */

/*
*betty style doc for function main goes there */int main(void)
{
char hek;
for (hek = '0'; hek <= '9'; hek++)
{
putchar(hek);
}
for (hek = 'a'; hek <= 'f'; hek++)
{
putchar(hek);
}
putchar('\n');
return (0);
}

