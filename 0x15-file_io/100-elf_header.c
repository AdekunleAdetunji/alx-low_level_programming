#include "main.h"

/**
 * elf - checks for elf files
 * @magic: Pointer to array of elf magic numbers
 * Return: Void
 */
void elf(unsigned char *magic)
{
	int i = 0;

	while (i < 4)
	{
		if (magic[i] != 'E' && magic[i] != 'L' &&
		    magic[i] != 'F' && magic[i] != 127)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		i++;
	}
}

/**
 * class - print an elf number's class
 * @class: Pointer to array of elf classes
 * Return: Void
 */
void class(unsigned char *class)
{
	printf("  Class:                             ");

	switch (class[EI_CLASS])
	{
	case ELFCLASS64:
		puts("ELF64");
		break;
	case  ELFCLASS32:
		puts("ELF32");
		break;
	case ELFCLASSNONE:
		puts("none");
		break;
	default:
		printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}

/**
 * magic: Display the magic number of an ELF header
 * @magic: A string of elf numbers
 * Return: Void
 */
void magic(unsigned char *magic)
{
	int i = 0;

	printf("  Magic:   ");
	while(i < EI_NIDENT)
	{
		printf("%02x", magic[i]);

		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
		i++;
	}
}

/**
 * osabi - Write the OS/ABI of an ELF header.
 * @magic: A pointer to an array of the ELF version.
 * Return: Void
 */
void osabi(unsigned char *magic)
{
	printf("  OS/ABI:                            ");

	switch (magic[EI_OSABI])
	{
	case ELFOSABI_HPUX:
		puts("UNIX - HP-UX");
		break;
	case ELFOSABI_STANDALONE:
		puts("Standalone App");
		break;
	case ELFOSABI_ARM:
		puts("ARM");
		break;
	case ELFOSABI_NONE:
		puts("UNIX - System V");
		break;
	case ELFOSABI_TRU64:
		puts("UNIX - TRU64");
		break;
	case ELFOSABI_FREEBSD:
		puts("UNIX - FreeBSD");
		break;
	case ELFOSABI_IRIX:
		puts("UNIX - IRIX");
		break;
	case ELFOSABI_NETBSD:
		puts("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		puts("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		puts("UNIX - Solaris");
		break;
	default:
		printf("<unknown: %x>\n", magic[EI_OSABI]);
	}
}

/**
 * abi - Write ABI version of ELF header
 * @magic: A array pointing to ELF ABI version.
 */
void abi(unsigned char *magic)
{
	printf("  ABI Version:                       %d",
	       magic[EI_ABIVERSION]);
	putchar('\n');
}

/**
 * data - Write the data of an ELF header to stdout.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void data(unsigned char *magic)
{
	printf("  Data:                              ");

	switch (magic[EI_DATA])
	{
	case ELFDATA2LSB:
		puts("2's complement, little endian");
		break;
	case ELFDATA2MSB:
		puts("2's complement, big endian");
		break;
	case ELFDATANONE:
		printf("none");
		break;
	default:
		printf("<unknown: %x>\n", magic[EI_CLASS]);
	}
}

/**
 * version - Prints the version of an ELF header.
 * @magic: A array of string to ELF version.
 */
void version(unsigned char *magic)
{
	printf("  Version:                           %d",
		   magic[EI_VERSION]);

	switch (magic[EI_VERSION])
	{
	case EV_CURRENT:
		puts(" (current)");
		break;
	default:
		putchar('\n');
		break;
	}
}

/**
 * type - Prints the type of an ELF header.
 * @type: ELF type.
 * @class: A string of ELF class.
 */
void type(unsigned int type, unsigned char *class)
{
	if (class[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_REL:
		puts("REL (Relocatable file)");
		break;
	case ET_NONE:
		puts("NONE (None)");
		break;
	case ET_DYN:
		puts("DYN (Shared object file)");
		break;
	case ET_EXEC:
		puts("EXEC (Executable file)");
		break;
	case ET_CORE:
		puts("CORE (Core file)");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}

/**
 * close_elf - Close ELF file.
 * @elf_file: fd of ELF file.
 * Return: Void
 */
void close_elf(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf_file);

		exit(98);
	}
}

/**
 * entry - Write the entry point of an ELF header to stdout.
 * @entry: The entry point address of the ELF header file.
 * @class: A pointer to an array containing the ELF class.
 */
void entry(unsigned long int entry, unsigned char *class)
{
	printf("  Entry point address:               ");

	if (class[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
				  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * main - Displays information about the elf header file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success and 98 on fail.
 */
int main(int argc, char *argv[])
{
	int open_file, read_file;
	Elf64_Ehdr *mem;

	(void) argc;
	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	mem = malloc(sizeof(Elf64_Ehdr));
	if (mem == NULL)
	{
		close_elf(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(open_file, mem, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(mem);
		close_elf(open_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf(mem->e_ident);
	puts("ELF Header:");
	magic(mem->e_ident);
	class(mem->e_ident);
	data(mem->e_ident);
	version(mem->e_ident);
	osabi(mem->e_ident);
	abi(mem->e_ident);
	type(mem->e_type, mem->e_ident);
	entry(mem->e_entry, mem->e_ident);

	free(mem);
	close_elf(open_file);
	return (0);
}
