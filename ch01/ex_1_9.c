#include <stdio.h>

/*  replace multiple blank to single blank */
int main(int argc, char **argv)
{
  int c, blk, len;
  char str[100];
  len = blk = 0;

  while((c = getchar()) != EOF)
  {
      if(c == ' ')
        ++blk;
      else if( c == '\n')
      {
        // output the string
        blk = 0;
        str[len] = '\0';
        printf("%s\n", str);
        len = 0;
      }
      else
        blk = 0;

      if(blk < 2 && len < 98 && c != '\n')
        str[len++] = c; 
  }
}  

