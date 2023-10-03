#include <stdio.h>
int unsigned ft_strlen(char *str) {
  unsigned int size;

  size = 0;
  while (*str != '\0') {
    str++;
    size++;
  }
  return size;
}

int unsigned ft_strlcpy(char *dest, char *src, unsigned int size) {
  char *src2;

  src2 = src;
  while (size != 0 && *src != '\0') {
    *dest = *src;
    dest++;
    src++;
    size--;
  }

  while (size != 0) {
    *dest = '\0';
    size--;
  }

  return ft_strlen(src2);
}
