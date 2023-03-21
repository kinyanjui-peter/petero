#include "main.h"

/**
 * _strcpy - Copies str pointed at;
 * @dest: destination
 * @src: pointer
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
        char *s = dest;

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (s);
}
