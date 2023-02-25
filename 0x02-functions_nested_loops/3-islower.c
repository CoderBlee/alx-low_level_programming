#include "main.h"
/**
* _islower - checks if the character c is in lowercase
* @c: the character to be checked
* Return: 1 if c is lowercase otherwise it returns 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
