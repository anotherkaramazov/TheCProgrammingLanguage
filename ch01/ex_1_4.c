#include <stdio.h>

/*  Print Fahrenheit-celcius table
 *  for far = 0, 20, ..., 300; floating-points version
*/
int main(int argc, char **argv)
{
  float fahr, celcius;
  float lower, upper, step;

  lower = -17.8;
  upper = 148;
  step = 11;

  celcius = lower;
  printf("fahr celcius\n");
  while (celcius <= upper) {
    fahr = (celcius/(5.0/9.0) ) + 32.0;
    printf("%3.0F %6.1f\n", fahr, celcius);
    celcius = celcius + step;
  }

}
