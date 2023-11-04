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
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%.2x ", header->e_ident[i]);
	}
	printf("\nClass: %d\n ", (header->e_ident[EI_CLASS] == ELFCLASS32));
	printf("Data: %d\n ", (header->e_ident[EI_DATA] == ELFDATA2LSB));
	printf("Version: %d\n ", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n ", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n ", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n ", header->e_type);
	printf("Entry point address: 0x%lx\n ", header->e_entry);
}
