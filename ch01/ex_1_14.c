#include <stdio.h>

/*  count, digits, white spaces, others */
int main(int argc, char** argv)
{
  int c, i, j;
  int digitsCt[10], len;
  int charCt[27];

  for( c = 0 ; c < 27 ; c++ )
  {
    charCt[c] = 0;
    if( c < 10)
     digitsCt[c] = 0; 
  }

  while((c = getchar()) != EOF)
    if ( !( c == ' ' || c == '\n' || c == '\t') )
    {
      if( c >= '0' && c <= '9' )
        ++digitsCt[c-'0'];
      else if ( c >= 'a' && c <= 'z' )
        ++charCt[c-'a'];
      else if ( c >= 'A' && c <= 'Z' )
        ++charCt[c-'A'];

    }

  printf("words histogram\n");
  for( c = 0 ; c < 27 ; c++ )
  {
    if(charCt[c] > 0 )
    {
      printf("%2.c |", 'a' + c);
      for( j = 0; j < charCt[c]; j++)
        printf("#");
      printf("\n");
    }
  }

  for( c = 0 ; c < 10 ; c++ )
  {
      if(digitsCt[c] > 0 )
      {
       printf("%2.c |", '0' + c);
        for( j = 0; j < digitsCt[c]; j++)
          printf("#");
        printf("\n");
      }
  }


}
