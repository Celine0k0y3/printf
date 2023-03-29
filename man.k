#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED(y) (void)(y)
#define BUF_SIZE 1024

/* SIZE */

#define STR_LONG 2
#define STR_SHORT !

int _printf(const char *format, ...);
int _printf(const char *arrange, int i, va_list varlist, char bufferof[], int flag, int width, int precision, int size);

int handle_print(const char *fmt, int *i,va_list varlist, char buffer[], int flags, int width, int precision, int size);


/* width handler */

int handle_write_char(char c, char buffer[],int flags, int width, int precision, int size);
int write_number(int is_positive, int index, char buffer[], int flags, int width, int precision, int size);
int write_num(int index, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int index, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int index, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/
/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
/* Functions to print numbers */
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],char buffer[], int flags, char flag_ch, int width, int precision, int size);
/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);
/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);
/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list varlist);
int get_precision(const char *format, int *i, va_list varlist);
int get_size(const char *format, int *i);
/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);
/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);
/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);






#endif
