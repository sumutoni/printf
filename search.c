#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check_specifier(char c) {
  char specifier[4] = {'d', 'i', 'c', 's'};
  int i;
  i = 0;
  while (i < 4) {
    if (specifier[i] == c) {
      return (i);
    }
    i++;
  }
  return (-1);
}
int *search(const char *s) {
  int *index;
  int counter, i;

  i = 0;
  index = malloc(3 * sizeof(int));
  if (!index)
    return NULL;
  counter = 0;
  while (s[i] != '\0') {
    if (s[i] == '%') {
      if (check_specifier(s[i + 1]) >= 0) {
        index[0] = i;
        index[1] = i + 1;
        counter++;
        break;
      }
    }
    i++;
  }
  index[2] = counter;
  return index;
}
