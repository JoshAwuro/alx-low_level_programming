#include "main.h"

/**
 * _isupper - checks if the letters are uppercase
 *  @c: input.
 *
 *  Return: 1 if c is uppercase
 *  0 otherwise.
 */

int isUpperCase(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1; // capital letter
    } else {
        return 0; // not a capital letter
    }
}
