#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *elfparam);
void print_magic(unsigned char *elfparam);
void print_class(unsigned char *elfparam);
void print_data(unsigned char *elfparam);
void print_version(unsigned char *elfparam);
void print_abi(unsigned char *elfparam);
void print_osabi(unsigned char *elfparam);
void print_type(unsigned int e_type, unsigned char *elfparam);
void print_entry(unsigned long int e_entry, unsigned char *elfparam);
void close_elf(int elf);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
