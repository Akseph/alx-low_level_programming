#include "main.h"



/**
* _isupper- to check for upper case
*@c: the character to be check;
*Return: 1 if the character is upper case, 0 if the character is lower case
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
