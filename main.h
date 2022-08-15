#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define NULL ((void *)0)
typedef struct specifier {
  char s;
  int (*point)(va_list);
  int index;
} spec;

int *search(const char *);
void replace(const char *, va_list);
int check_specifier(char c);
int print_int(va_list);
int print_char(va_list);
int print_string(va_list);

#endif