#include "main.h"
#include <stdio.h>
/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	peintf("%c: %d\n", c, _issupper(c));
	return (0);
}
