#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
  char tab[] = "c";
  char tab2[22];
  printf("%i\n", strlcpy(tab2, tab, 1));
  printf("%i\n", ft_strlcpy(tab2, tab, 10));
  printf("%s\n", tab2);
  return (0);
}
