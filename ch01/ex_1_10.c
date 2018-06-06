#include <stdio.h>
/* didnt undertand wtf this should do... */
int main(int argc, char **argv)
{
  int c;
  while((c = getchar()) != EOF)
  {
    if(c == '\n')
      printf("\n");
    else if(c == '\b')
      printf("\b");
    else if(c == '\\' )
      printf("\\");
    else
      printf("%c", c);
  }
}
