#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int print_char(va_list list) {
  char c;
  size_t bytes;
  c = va_arg(list, int);
  bytes = write(1, &c, sizeof(c));
  printf("%lu", bytes);
  return bytes;
}
int print_int(va_list list) {
  int c;
  size_t bytes;
  // to revise
  c = va_arg(list, int);
  bytes = write(1, &c, sizeof(c));
  printf("%lu", bytes);
  return bytes;
}
int print_string(va_list list) {
  char *string;
  size_t bytes;
  string = va_arg(list, char *);
  if (!string) {
    string = "null";
    bytes = write(1, string, 5);
  }
  else
    bytes = write(1, string, sizeof(string));
  printf("%lu", bytes);
  return bytes;
}