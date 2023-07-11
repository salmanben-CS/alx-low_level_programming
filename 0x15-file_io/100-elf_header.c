#include "main.h"
void display_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr *header)
{
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; ++i)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %d-bit\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);

    printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

    printf("Version: %d\n", header->e_ident[EI_VERSION]);

    printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type: %d\n", header->e_type);

    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
    const char *filename;
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        display_error("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        display_error("Failed to open the file");
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        display_error("Failed to read the ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        display_error("The file is not an ELF file");
    }

    display_elf_header(&header);

    close(fd);
    return (0);
}
