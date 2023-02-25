#include "main.h"
/**
 * print_version - Prints the version of an ELF header.
 * @elfparam: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *elfparam)
{
        printf("  Version:                           %d",
               elfparam[EI_VERSION]);

        switch (elfparam[EI_VERSION])
        {
        case EV_CURRENT:
                printf(" (current)\n");
                break;
        default:
                printf("\n");
                break;
        }
}

