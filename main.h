#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* For Sizes */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 * @fn: Associated function
 * @fmt: Format used
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 * @fm_t: Associated function
 * @fmt:format
 */
typedef struct fmt fmt_t;
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/**For the Flags**/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/***For the Functions***/

int print_non_printable(va_list types, char buffer[],/*non-printable chars*/
int flags, int width, int precision, int size);

int print_char(va_list types, char buffer[],/*To print chars and strings*/
int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
int flags, int width, int precision, int size);

int print_reverse(va_list types, char buffer[],/*To print reversed string*/
int flags, int width, int precision, int size);

/**
 * get_flags - turns the flags when printf finds a flag
 * modifier in the format string.
 * @format: char that contains the flags specifier.
 * @i: pointer to the struct flags in which we turn the flags on.
 *
 * Return: 1 flags turned on, Otherwise 0.
 */
int get_flags(const char *format, int *i);/*To print specifiers*/
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

int print_int(va_list types, char buffer[],/*To print integers*/
int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

int print_pointer(va_list types, char buffer[],/*To print memory address*/
int flags, int width, int precision, int size);

/**
 * get_precision - Calculates the precision for printing
 * @format: The formatted string in which to
 * print the Arguments
 * @list: The list of  all the Arguements
 * @i: The list of Arguements to print.
 *
 * Return: precision
 */
int get_precision(const char *format, int *i, va_list list);/*specifiers*/
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);

int write_unsgnd(int is_negative, int ind,
char buffer[],
int flags, int width, int precision, int size);/*For handling width*/
int handle_write_char(char c, char buffer[],
int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
int width, int flags, char padd, char extra_c, int padd_start);

int print_rot13string(va_list types, char buffer[],
int flags, int width, int precision, int size);/*For printing string in rot13*/

/**
 * is_digit - takes a single argument in the form of an integer
 * and returns the value of type int.
 * @char: character to be returned.
 *
 * Return: int
 */
int is_digit(char);/****For utils****/
int is_printable(char);
int append_hexa_code(char, char[], int);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif
