#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
*
* Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @x: test number
 * @n: Squared number
 *
 * Return: square root of n
 */

int _sqrt(int x, int n)
{
	if (x > x / 2)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	
	return (_sqrt(x + 1, n));
}

