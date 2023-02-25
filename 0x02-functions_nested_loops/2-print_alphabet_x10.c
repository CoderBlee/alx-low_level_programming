#include "main.h"
/**
* print_alphabet_x10 - prints alphabets 10 times in lowercase
* Return: void
*/
void print_alphabet_x10(void)
{
	char m;
	int n;

	n = 0;

	while (n < 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
