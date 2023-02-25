#include "main.h"
 /**
 * print_magic - Prints the magic numbers of an ELF header.
 * @elfparam: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *elfparam)
{
        int counter;

        printf("  Magic:   ");

        for (counter = 0; counter < EI_NIDENT; counter++)
        {
                printf("%02x", elfparam[counter]);

                if (counter == EI_NIDENT - 1)
                        printf("\n");
                else
                        printf(" ");
        }
}
