#include "main.h"
#include <elf.h>

/**
 * read_elf_header - Read the ELF header from the given file.
 * @filename: The name of the ELF file to read.
 * @elf_header: Pointer to store the ELF header information.
 * Return: 1 on success, -1 on failure.
 */
int read_elf_header(const char *filename, Elf64_Ehdr *elf_header)
{
	int fd, num_read;

fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cannot open file\n");
	return (-1);
	}

	num_read = read(fd, elf_header, sizeof(Elf64_Ehdr));
	if (num_read == -1 || num_read != sizeof(Elf64_Ehdr))
	{
	dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
	close(fd);
	return (-1);
	}

	close(fd);
	return (1);
}

/**
 * print_elf_header_info - Print the required ELF header information.
 * @elf_header: Pointer to the ELF header.
 */

void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", elf_header->e_ident[i]);
	}

	printf("\n");

	printf("  Class:                             %s\n",
	elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

	printf("  Data:                              %s\n",
		elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" :
		(elf_header->e_ident[EI_DATA] == ELFDATA2MSB ?
"2's complement, big endian" : "Invalid"));

	printf("  Version:                           %d (current)\n",
	elf_header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %d\n",
	elf_header->e_ident[EI_OSABI]);

	printf("  ABI Version:                       %d\n",
	elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
	elf_header->e_type == ET_REL ? "REL (Relocatable file)" :
	(elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" :
	(elf_header->e_type == ET_DYN ? "DYN (Shared object file)" :
	(elf_header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown"))));

	printf("  Entry point address:               0x%lx\n",
		(unsigned long)elf_header->e_entry);
}

/**
 * main - main entry
 * @argc: Argc
 * @argv: Argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	if (read_elf_header(argv[1], &elf_header) == -1)
	{
		exit(98);
	}

	print_elf_header_info(&elf_header);

	return (0);
}

