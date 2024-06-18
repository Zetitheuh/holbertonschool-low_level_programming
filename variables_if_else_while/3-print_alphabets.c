#include <stdio.h>
/**
 * main - Entry of the progrq;
 * Description of what do
 *
 * Return: Program well executed
 **/
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
            putchar(letter);
        for (letter ='A'; letter <= 'Z'; letter++)
            putchar(letter);
        putchar('\n');
        return (0);
}
