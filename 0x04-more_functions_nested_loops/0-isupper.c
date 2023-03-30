#include "main.h"

/**
 * _isupper - _isupper function
 *
 * Description:write a function that checks for uppercase character
 *
 * @c:value to be checked
 *
 * Return:returned value alwyas zero
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
