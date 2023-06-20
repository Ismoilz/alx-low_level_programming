#include "main.h"

/**
 * main - Entry point
 * Description: Prints _putchar without stdio
 * Return: 0 (success)
 */

int main() {
    char word[] = "_putchar";
    int i = 0;

    while (word[i] != 0) {
       _putchar(word[i]);
        i++;
    }

    _putchar('\n');

    return 0;
}
