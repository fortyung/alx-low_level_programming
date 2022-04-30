#include "main.h"

/**
  *_pow_recursion - returns the val of x to the pow of y
  *@x: the value
  *@y: the power
  *Return: returns 0 success, -1 fail
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x *  _pow_recursion(x, y - 1));
}
