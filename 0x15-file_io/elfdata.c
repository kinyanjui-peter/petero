#include "main.h"
/**
 * print_data - Prints the data of an ELF header.
 * @elfparam: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *elfparam)
{
printf("  Data:                              ");

switch (elfparam[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", elfparam[EI_CLASS]);
}
}
