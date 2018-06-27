#include <stdio.h>

#define IN 1
#define OUT 0

/*  count lines, words, and character in input  */
int main(int argc, char ** argv)
{
  int c, state, len;
  char str[100];
  state = OUT;
  len = 0;
  while ((c = getchar()) != EOF) {
    if(len < 99 ) 
    {
      str[len++] = c;
      if (c == ' ' || c == '\n' || c == '\t')
        state = OUT;
      if ( state == OUT )
      {
        printf("\nlen: %d ", len);
        str[len] = '\0';
        printf(" str: %s \n",str);
        state = IN;
        len = 0;
        for(int i =0; i< len; i++)
          str[i] = '\0';
      }
    }
  }


}
