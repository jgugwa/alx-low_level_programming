#include "main.h"
/*
 *main code here*/int main(void)
{
	char putchar[] = "_putcher";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putcher(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
