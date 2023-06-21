#include "main.h"
/*
 *main code here*/int main(void)
{
	char _putcher[] = "_putcher";
	int i = 0;

	while (_putcher[i] != '\0')
	{
		_putcher(_putcher[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
