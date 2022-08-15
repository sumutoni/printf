#include "main.h"
#include <stdio.h>
int _printf(const char *format, ...) {
  char *s;
  va_list list;
  int counter = 0;

  va_start(list, format);
  replace(format, list);
  va_end(list);
  return 0;
}
int main(void) {
  _printf("This %c char ", 'c');
  //printf("This %c char ", 'c');
  return 0;
}