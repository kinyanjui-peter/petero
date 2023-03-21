#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: source file
 * @n: bytes
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
        int counter;
        int fin;

        counter = 0;
        while (dest[counter] != '\0')
        {
                counter++;
        }
        fin = 0;
        while (fin < n && src[fin] != '\0')
        {
                dest[counter] = src[fin];
                counter++;
                fin++;
        }
        dest[counter] != '\0';
        return (dest);
}
