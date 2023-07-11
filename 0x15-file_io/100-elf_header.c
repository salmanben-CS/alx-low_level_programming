#include "main.h"

/**
 * read_elf_header - Reads the header of an ELF file.
 * @fd: The file descriptor of the ELF file.
 * @elf_header: Pointer to the ELF header structure.
 *
 * Return: Nothing.
 */
void read_elf_header(int32_t fd, Elf32_Ehdr *elf_header)
{
        if (elf_header == NULL)
        {
                dprintf(STDERR_FILENO, "header null Unable to read elf\n");
                exit(98);
        }

        if (lseek(fd, (off_t)0, SEEK_SET) != (off_t)0)
        {
                dprintf(STDERR_FILENO, "offset Unable to read elf\n");
                exit(98);
        }

        if (read(fd, (void *)elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
        {
                dprintf(STDERR_FILENO, "size of Unable to read elf\n");
                exit(98);
        }
}

/**
 * is_ELF - Checks if the given ELF header represents an ELF file.
 * @eh: The ELF header structure.
 *
 * Return: 1 if it's an ELF file, else 0.
 */
bool is_ELF(Elf32_Ehdr eh)
{
        if (eh.e_ident[0] == 0x7f && eh.e_ident[1] == 'E' &&
            eh.e_ident[2] == 'L' && eh.e_ident[3] == 'F')
                return (1);
        return (0);
}

/**
 * print_typ - Prints the type of the ELF file.
 * @eh: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_typ(Elf32_Ehdr eh)
{
        printf("Type:                                           ");
        switch (eh.e_type)
        {
        case ET_NONE:
                printf("N/A (0x0)\n");
                break;
        case ET_REL:
                printf("REL (Relocatable file)\n");
                break;
        case ET_EXEC:
                printf("EXEC (Executable file)\n");
                break;
        case ET_DYN:
                printf("DYN (Shared Object file)\n");
                break;
        case ET_CORE:
                printf("CORE (Core file)");
                break;
        default:
                printf("<unknown: %d>\n", eh.e_type);
        }
}

/**
 * print_os - Prints the OS/ABI information of the ELF file.
 * @eh: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_os(Elf32_Ehdr eh)
{
        printf("OS/ABI:                                         ");
        switch (eh.e_ident[EI_OSABI])
        {
        case ELFOSABI_SYSV:
                printf("UNIX - System V\n");
                break;
        case ELFOSABI_HPUX:
                printf("UNIX - HP-UX\n");
                break;
        case ELFOSABI_NETBSD:
                printf("UNIX - NetBSD\n");
                break;
        case ELFOSABI_LINUX:
                printf("UNIX - GNU");
                break;
        case ELFOSABI_SOLARIS:
                printf("UNIX - Solaris\n");
                break;
        case ELFOSABI_AIX:
                printf("UNIX - AIX\n");
                break;
        case ELFOSABI_IRIX:
                printf("UNIX - Irix\n");
                break;
        case ELFOSABI_FREEBSD:
                printf("UNIX - FreeBSD\n");
                break;
        case ELFOSABI_TRU64:
                printf("UNIX - TRU64\n");
                break;
        case ELFOSABI_MODESTO:
                printf("Novell Modesto\n");
                break;
        case ELFOSABI_OPENBSD:
                printf("UNIX - OpenBSD\n");
                break;
        case 13:
                printf("VMS - OpenVMS\n");
                break;
        case 14:
                printf("HP - Non-Stop Kernel\n");
                break;
        case 15:
                printf("AROS\n");
                break;
        case 16:
                printf("FenixOS");
                break;
        default:
                printf("<unknown: %d>\n", eh.e_ident[EI_OSABI]);
        }
}

/**
 * print_clas - Prints the class information of the ELF file.
 * @eh: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_clas(Elf32_Ehdr eh)
{
        printf("Class:                                          ");
        switch (eh.e_ident[EI_CLASS])
        {
        case ELFCLASS32:
                printf("ELF32\n");
                break;
        case ELFCLASS64:
                printf("ELF64\n");
                break;
        default:
                printf("Invalid class\n");
        }
}

/**
 * print_dta - Prints the data encoding of the ELF file.
 * @eh: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_dta(Elf32_Ehdr eh)
{
        printf("Data:                                           ");
        switch (eh.e_ident[EI_DATA])
        {
        case ELFDATA2LSB:
                printf("2's complement, little endian\n");
                break;
        case ELFDATA2MSB:
                printf("2's complement, big endian\n");
                break;
        default:
                printf("Invalid ELF data\n");
        }
}

/**
 * print_vrsn - Prints the ELF version.
 * @eh: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_vrsn(Elf32_Ehdr eh)
{
        printf("Version:                                        ");
        switch (eh.e_version)
        {
        case EV_NONE:
                printf("Invalid version\n");
                break;
        default:
                printf("%d (Current)\n", 1);
        }
}

/**
 * print_elf_header - Prints the contents of the ELF header.
 * @elf_header: The ELF header structure.
 *
 * Return: Nothing.
 */
void print_elf_header(Elf32_Ehdr elf_header)
{
        int i;

        printf("ELF Header:\n");
        printf("Magic:     %x %x %x %x", elf_header.e_ident[0],
               elf_header.e_ident[1], elf_header.e_ident[2],

