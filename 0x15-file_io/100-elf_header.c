/*
 * File: 100-elf_header.c
 * Auth: Justus Gugwa
 * Date: 11 Aug 2023
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic_and_class(unsigned char *e_ident);
void print_data_and_version(unsigned char *e_ident);
void print_abi_and_osabi(unsigned char *e_ident);
void print_type_and_entry(unsigned int e_type,
unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
    /* ... */
}

/**
 * print_magic_and_class - Prints the magic numbers and class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic_and_class(unsigned char *e_ident)
{
    /* ... */
}

/**
 * print_data_and_version - Prints the data and version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data_and_version(unsigned char *e_ident)
{
    /* ... */
}

/**
 * print_abi_and_osabi - Prints the ABI and OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_abi_and_osabi(unsigned char *e_ident)
{
    /* ... */
}

/**
 * print_type_and_entry - Prints the type and entry point of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_type_and_entry(unsigned int e_type,
unsigned long int e_entry, unsigned char *e_ident)
{
    /* ... */
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
    /* ... */
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    /* ... */
}

