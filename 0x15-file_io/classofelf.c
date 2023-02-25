#include "main.h"
/**
 * print_class - Prints the class of an ELF header.
 * @elfparam: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *elfparam)
{
        printf("  Class:                             ");

        switch (elfparam[EI_CLASS])
        {
        case ELFCLASSNONE:
                printf("none\n");
                break;
        case ELFCLASS32:
                printf("ELF32\n");
                break;
        case ELFCLASS64:
                printf("ELF64\n");
                break;
        default:
                printf("<unknown: %x>\n", elfparam[EI_CLASS]);
        }
}
