#include "main.h"
/**
 * _islower - prototype function
 * Check if lowercase or not
 *
 * Return: 1 if lower and 0 if not
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

