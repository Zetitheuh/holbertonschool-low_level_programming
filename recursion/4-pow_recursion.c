/**
 * _pow_recursion - calculate the power
 * @x: the nomber to has to be power
 * @y: The power
 * Return: the power by x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
