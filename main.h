#ifndef MAIN_H
#define MAIN_H
#define MAX_BUFFER_SIZE 60
#define MAX_BFFR 1024
/*libraries*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
/*prototypes*/
int my_putchar(char c);
int _strlen(char *s);
int num_len(int num);
int int_to_str(int n);
void check_percent(int *count_char);
void handle_char(char c, va_list args, int *count);
int _printf(const char *format, ...);
/*advance prototypes*/
int number_to_binary(unsigned int num);
/* task 3 */
void handle_hex(unsigned int num, char base, char *buffer);
void handle_octal(unsigned int num, char *buffer);
void handle_decimal(unsigned int num, char *buffer);
int number_to_hx_to_octal(unsigned int num, char base);
/*task 5*/
void print_hex(unsigned int num);
#endif
