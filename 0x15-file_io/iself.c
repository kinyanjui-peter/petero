#include "main.h"
/** check_elf - Checks if a file is an ELF file.
 * @elfparam: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *elfparam)
{
        int counter;

        for (counter = 0; counter < 4; counter++)
        {
                if (elfparam[counter] != 127 &&
                    elfparam[counter] != 'E' &&
                    elfparam[counter] != 'L' &&
                    elfparam[counter] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}
