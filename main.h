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





#endif
