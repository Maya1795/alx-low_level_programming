#include "main.h"
#include <elf.h>

void p_o(Elf64_Ehdr r);

/**
 * magic - print elf magic
 *
 * @r: struct
 *
 */
void magic(Elf64_Ehdr r)
{
	int m;

	printf("  Magic:   ");
	for (m = 0; m < EI_NIDENT; m++)
		printf("%2.2x%s", r.e_ident[m], m == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * class - print class
 *
 * @r: struct
 *
 */
void class(Elf64_Ehdr r)
{
	printf("  Class:                             ");
	switch (r.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * data  - print data
 *
 * @r: struct
 *
 */

void data(Elf64_Ehdr r)
{
	printf("  Data:                             ");
	switch (r.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * version - print version
 *
 * @r: struct
 *
 */
void version(Elf64_Ehdr r)
{
	printf("  Version:                           %d", r.e_ident[EI_VERSION]);
	switch (r.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
	}
	printf("\n");
}
/**
 * osabi- print osabi
 *
 * @r: struct
 *
 */
void osabi(Elf64_Ehdr r)
{
	printf("  OS/ABI:                            ");
	switch (r.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			p_o(r);
			break;
	}
	printf("\n");
}

/**
 * p_o - more osabi
 *
 * @r: struct
 *
 */
void p_o(Elf64_Ehdr r)
{
	switch (r.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - Open BSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standa lone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x", r.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * abvi - print abiversion
 *
 * @r: struct
 *
 */
void abvi(Elf64_Ehdr r)
{
	printf("  ABI Version:                       %d\n",
			r.e_ident[EI_VERSION]);
}
/**
 * type - print type
 *
 * @r: struct
 *
 */
void type(Elf64_Ehdr r)
{
	char *t = (char *)&r.e_type;
	int c = 0;

	printf("  Type:                              ");
	if (r.e_ident[EI_DATA] == ELFDATA2MSB)
		c = 1;
	switch (t[c])
	{
		case ET_NONE:
			printf("None (none)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", t[c]);
			break;
	}
	printf("\n");
}

/**
 * entry - print entry
 *
 * @r: struct
 *
 */
void entry(Elf64_Ehdr r)
{
	int i = 0, l = 0;
	unsigned char *e = (unsigned char *)&r.e_entry;

	printf("  Entry point address:               0x");
	if (r.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = r.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[i])
			i--;
		printf("%x", e[i--]);
		for (i = 0; i >= 0; i--)
			printf("%02x", e[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		l = r.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[i])
			i++;
		printf("%x", e[i++]);
		for (i = 0; i <= l; i++)
			printf("%02x", e[i]);
		printf("\n");
	}
}

/**
 * main- program
 *
 * @ac: count
 * @av: pointer
 *
 * Return: 1 or 0
 */

int main(int ac, char **av)
{
	int f;
	ssize_t m;
	Elf64_Ehdr r;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	f = open(av[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "can't open file: %s\n", av[1]), exit(98);
	m = read(f, &r, sizeof(r));
	if (m < 1 || m != sizeof(r))
		dprintf(STDERR_FILENO, "can't read from file: %s\n", av[1]), exit(98);
	if (r.e_ident[0] == 0x7f && r.e_ident[1] == 'E' && r.e_ident[2] == 'L' &&
			r.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file%s\n", av[1]), exit(98);
	magic(r);
	class(r);
	data(r);
	version(r);
	abvi(r);
	osabi(r);
	type(r);
	entry(r);
	if (close(f))
		dprintf(STDERR_FILENO, "Error closing file description: %d\n", f), exit(98);
	return (EXIT_SUCCESS);

}
