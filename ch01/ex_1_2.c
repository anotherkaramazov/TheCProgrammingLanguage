#include <stdio.h>

int main(int argc, char **argv)
{
  printf("hello, ");
  printf("world \z \q ");
  // using \z \q give us warning at compilation time: unknow escape sequence
  printf("\n");
  return 0;
}
