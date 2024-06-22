#include "main.h"

/**
 * print_jack_bauer_day - print minute
 * Description: print minute from 00 to 23:59
 */
void print_jack_bauer_day(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
	for (int minute = 0; minute < 60; minute++)
	{
		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
	}
	}
}
