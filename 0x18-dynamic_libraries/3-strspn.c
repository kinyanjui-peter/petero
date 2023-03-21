#include "main.h"

/**
 * _strspn - print prefix sub
 *@s: source
 *@accept: bytes
 *Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int y = 0;
        int n;

        while (*s)
        {
                for (n = 0; accept[n]; n++)
                {
                        if (*s == accept[n])
                        {
                                y++;
                                break;
                        }
                        else if (accept[n + 1] == '\0')
                                return (y);
                }
                                        s++;
        }
                                return (y);
}  
