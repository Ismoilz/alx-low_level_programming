#include <main.h>

/**
 * main - Entry point
 * Description: Prints _putchar without stdio
 * Return: 0 (success)
 */

#include "main.h"

int main() {
    char printo[] = "_putchar";
    int i = 0;

    while (word[i] != 0) {
        putchar(word[i]);
        i++;
    }

    putchar('\n');

    return 0;
}
