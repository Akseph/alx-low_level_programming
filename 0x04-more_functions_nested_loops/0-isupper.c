#include "main.h"

#include <stdio.h>



/**
*@c - check the code.
* Return:1 if the chracter is uppercase 0, if otherwise
*/
int main(void)
{	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);

}
