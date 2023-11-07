#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <string.h>

/**
 * print_error - function read an error
 * @error_message: the error message to be printed
 *
 * Return: void
 */
void print_error(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * print_elf_header - function displays elf header
 * @header: the header to be displayed in 64 bit
 *
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass: %d\n ", (header.e_ident[EI_CLASS] == ELFCLASS32));
	printf("Data: %d\n ", (header.e_ident[EI_DATA] == ELFDATA2LSB));
	printf("Version: %d\n ", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n ", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n ", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n ", header.e_type);
	printf("Entry point address: 0x%lx\n ", header.e_entry);
}

/**
 * main - Entry point
 * @argc: argument command to ELF header
 * @argv: command to the value
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Error: Usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	o = open(argv[1], O_RDONLY);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		close(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	return (r);
}
