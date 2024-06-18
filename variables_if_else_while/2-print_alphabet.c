#include <stdio.h>
/**
 *
 * main - Print alphabet
 *
 * Return: Program well executed
 **/
int main() {
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c\n", letter);
    }
    return 0;
}
