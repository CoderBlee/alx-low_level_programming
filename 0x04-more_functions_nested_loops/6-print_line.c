#include "main.h"
/**
* print_line -  draws a straight line in the terminal
* @n: the number of times the character _ is printed
* The line should end with a \n
* If n is 0 or less, the function should only print \n
* Return: Always 0
*/
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');

}
