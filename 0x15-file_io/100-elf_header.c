#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
/**
 * display_elf_header_info - program displays the information contained
 * in ELF header at the start of an ELF file
 * @file_name: the name of file to be displayed
 *
 * Return: void
 */
void display_elf_header_info(const char *file_name)
{
	int fd = open(file_name, O_RDONLY);
	int i;

	if (fd == -1)
	{
		display_error("Error opening file");
	}

	Elf32_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		display_error("Error reading ELF header");
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		display_error("Not an ELF file");
	}

	printf("Magic:   ");
}

/**
 * display_error - function read an error
 * @error_message: the error message to be printed
 *
 * Return: void
 */
void display_error(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * print_elf_header - function prints ELF headers
 * @elf_header: the ELF to be printed
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr *elf_header)
{
	printf("Magic: %02x %02x %02x %02x\n", elf_header->e_ident[EI_MAG0]);
	printf("Class:            %d\n", elf_header->e_ident[EI_CLASS]);
	printf("Data:             %d\n", elf_header->e_ident[EI_DATA]);
	printf("Version:          %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:            %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version:      %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:             %d\n", elf_header->e_type);
	printf("Entry point addr:  0x%lx\n", elf_header->e_entry);
}

