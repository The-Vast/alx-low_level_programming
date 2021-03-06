#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0, product = 1;
    int len;

    if (b == '\0' || b = NULL)
        return (0);
    
    for (len = 0; b[len];)
        len++;

    for (len -= 1; len >= 0; len--)
    {
        if (b[len] != '0' && b[len] != '1')
            return (0);
        
        num += (b[len] - '0') * product;
        product *= 2;
    }
    return (num);
}
