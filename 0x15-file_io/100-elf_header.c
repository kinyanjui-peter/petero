#include "main.h"
/**
 * print_entry - Prints the entry point of an ELF head.
 * @e_entry: The address of the ELF entry point.
 * @elfparam: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *elfparam)
{
	printf("  Entry point address:               ");

	if (elfparam[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elfparam[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF head at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, head, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(head);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(head->elfparam);
	printf("ELF Header:\n");
	print_magic(head->elfparam);
	print_class(head->elfparam);
	print_data(head->elfparam);
	print_version(head->elfparam);
	print_osabi(head->elfparam);
	print_abi(head->elfparam);
	print_type(head->e_type, head->elfparam);
	print_entry(head->e_entry, head->elfparam);

	free(head);
	close_elf(o);
	return (0);
}

