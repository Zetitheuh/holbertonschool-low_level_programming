#include "main.h"

/**
 * times_table - print table
 * Description: print the 9 times start to 0
 */
void times_table(void)
{
	int ligne = 10;
	int colonne = 10;
	int i;
	int j;
	int produit;

	for (i = 0; i < ligne; i++)
	{
		for (j = 0; j < ligne; j++)
		{
			produit = i * j;
			if (produit >= 10)
			{
				_putchar('0' + produit / 10);
				_putchar('0' + produit % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + produit);
			}
			if (j < colonne - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
