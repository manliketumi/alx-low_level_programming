#include "main.h"
/**
 * main -Entry point
 * @argc: argument command
 * @argv: argument value
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int i, fd;
unsigned char e_ident[16];
uint16_t e_type;
uint64_t e_entry;

if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
return (98);
}
fd = open(argv[1], O_RDONLY);

if (fd < 0)
{
perror("Error opening file");
return (98);
}

if (read(fd, e_ident, 16) != 16 || e_ident[0] != 0x7f || strncmp((char *)&e_ident[1], "ELF", 3) != 0)
{
fprintf(stderr, "Not an ELF file\n");
return (98);
}

lseek(fd, 4, SEEK_SET);

if (read(fd, &e_type, 2) != 2 || read(fd, &e_entry, 8) != 8)
{
perror("Error reading file");
return (98);
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < 16; i++)
printf("%02x ", e_ident[i]);
printf("\n  Type: %x\n", e_type);
printf("Entry point address: 0x%lx\n", e_entry);

close(fd);
return (0);
}
