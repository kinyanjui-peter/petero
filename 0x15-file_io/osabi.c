#include "main.h"
/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @elfparam: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *elfparam)
{
        printf("  OS/ABI:                            ");

        switch (elfparam[EI_OSABI])
        {
        case ELFOSABI_NONE:
                printf("UNIX - System V\n");
                break;
        case ELFOSABI_HPUX:
                printf("UNIX - HP-UX\n");
                break;
        case ELFOSABI_NETBSD:
                printf("UNIX - NetBSD\n");
                break;
        case ELFOSABI_LINUX:
                printf("UNIX - Linux\n");
                break;
        case ELFOSABI_SOLARIS:
                printf("UNIX - Solaris\n");
                break;
        case ELFOSABI_IRIX:
                printf("UNIX - IRIX\n");
                break;
        case ELFOSABI_FREEBSD:
                printf("UNIX - FreeBSD\n");
                break;
        case ELFOSABI_TRU64:
                printf("UNIX - TRU64\n");
                break;
        case ELFOSABI_ARM:
                printf("ARM\n");
                break;
        case ELFOSABI_STANDALONE:
                printf("Standalone App\n");
                break;
        default:
                printf("<unknown: %x>\n", elfparam[EI_OSABI]);
        }
}
