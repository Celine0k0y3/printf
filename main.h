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




#endif
