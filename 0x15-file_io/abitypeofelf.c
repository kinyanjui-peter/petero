#include "main.h"
/**
 * print_abi - Prints the ABI version of an ELF header.
 * @elfparam: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *elfparam)
{
printf("  ABI Version:                       %d\n",
elfparam[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @elfparam: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *elfparam)
{
if (elfparam[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
