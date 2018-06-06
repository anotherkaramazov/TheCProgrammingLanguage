#include <stdio.h>

/*  countlinrd in input */
int main(int argc, char **argv)
{
  int c, nl, blk, tab;
  nl = blk = tab = 0;

  while((c = getchar()) != EOF)
      if(c == '\n')
        ++nl;
      else if(c == '\t')
        ++tab;
      else if(c == ' ')
        ++blk;

  printf("nl: %d\tblk: %d\ttab: %d\n", nl, blk, tab);
}  

