#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print all natural number from n to  98
* followed by a new line
* Numbers mut be separated by a comma, followed by a space
* Numbers shuld be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be 98
* @n: Starting number
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
