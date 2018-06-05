#include <stdio.h>

int main(int arg, char **argv)
{
  int c;

  while (( c = getchar()) != EOF)
  {
      putchar(c);
  }
  return 0;
}
