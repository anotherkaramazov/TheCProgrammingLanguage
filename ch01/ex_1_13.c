#include <stdio.h>

/*  count, digits, white spaces, others */
int main(int argc, char** argv)
{
  int c, i, j;
  int nlen[100], len;

  len = 0;
  i = 0;
  while((c = getchar()) != EOF)
    if ( c == ' ' || c == '\n' || c == '\t' )
    {
      nlen[i++] = len;
      len =0;
    }
    else
      ++len;

  printf("words histogram\n");
  for( c = 0 ; c < i ; c++ )
  {
    for( j = 0; j < nlen[c]; j++)
      printf("#");
    printf("\n");
  }


}
