#include "main.h"
/**
* times_table - prints te 9 times table, starting with 0.
* Return void
*/
void time_table(void)
{
	int number, number2, prod;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (number2 = 1; number2 <= 9; number2++)
		{
			_putchar(',');
			_putchar(' ');

			prod = number * number2;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
		}

		_putchar('\n');
	}
}
