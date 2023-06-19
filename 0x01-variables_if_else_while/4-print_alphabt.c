#include <stdio.h>
/* more headers goes there */

/*
*betty style doc for function main goes there */int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc == 'e' || lc == 'q')
{
	continue;
}
putchar(lc);

}
putchar('\n');

return (0);
}

