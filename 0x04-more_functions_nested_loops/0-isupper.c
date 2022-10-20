#include "main.h"

#include <stdio.h>
/**
* _isupper - check if it is upper or lower case.
*@c: character to be checked
* Return: 1 if the the character is uppercase, 0 if otherwise.
*/
int _isupper(int c)

{
	if (c >= 'A' && c <= 'z')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
