
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic_and_class(unsigned char *e_ident);
void print_version_and_abi(unsigned char *e_ident);
void print_type_and_entry(unsigned int e_type, unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_magic_and_class(unsigned char *e_ident) {
    int index;

    printf("  Magic:   ");

    for (index = 0; index < EI_NIDENT; index++) {
        printf("%02x", e_ident[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }

    printf("  Class:                             ");

    switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

void print_version_and_abi(unsigned char *e_ident) {
    */ print_version and print_abi implementation */
}

void print_type_and_entry(unsigned int e_type, unsigned long int e_entry, unsigned char *e_ident) {
    /* Your print_type and print_entry implementation*/
}
