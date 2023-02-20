#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
	int number;
	char low;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');

	return (0);

}
