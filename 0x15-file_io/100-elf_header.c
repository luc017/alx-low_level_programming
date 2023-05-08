#include "main.h"
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <elf.h>

#define ELF_MAGIC "\177ELF"

/**
 * print_error - prints the error
 * @message: pointer
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * print_elf_header - prints the header
 * @ehdr: pointer
 */
void print_elf_header(const Elf64_Ehdr *ehdr)
{
	int d;

	printf("  Magic:   ");
	for (; d < SELFMAG; d++)
		printf("%02x ", ehdr->e_ident[d]);
	printf("\n");

	printf("  Class:                             %s\n",
			ehdr->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			ehdr->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	 printf("  Version:                           %d%s\n",
			 ehdr->e_ident[EI_VERSION],
			 ehdr->e_ident[EI_VERSION] == EV_CURRENT ?
			 " (current)" : "");
	 printf("  OS/ABI:                            %s\n",
			 ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			 "UNIX - System V" : "Other");
	 printf("  ABI Version:                       %d\n",
			ehdr->e_ident[EI_ABIVERSION]);
	 printf("  Type:                              ");

	 switch (ehdr->e_type)
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
			printf("<unknown>: 0x%x\n", ehdr->e_type);
			break;
	 }
	 printf("  Entry point address:               %lx\n", ehdr->e_entry);
}
/**
 * main - executes the elf
 * @argc: argument count
 * @argv: argument vector
 */
int main (int argc, char **argv)
{
	int file;
	ssize_t number;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		print_error(strerror(errno));

	number = read(file, &ehdr, sizeof(ehdr));
	if (number != sizeof(ehdr))
		print_error("read error");

	if (strncmp((const char *)ehdr.e_ident, ELF_MAGIC, SELFMAG != 0))
		print_error("not an ELF file");

	print_elf_header(&ehdr);

	if (close(file) == -1)
		print_error(strerror(errno));


	return (0);
}
